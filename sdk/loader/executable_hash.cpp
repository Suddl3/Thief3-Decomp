// See executable_hash.hpp for what this module is for.
#include "executable_hash.hpp"

#include <bcrypt.h>

#include <cstring>
#include <new>

namespace t3sdk::engine {
namespace {

// SHA-1 of the one supported T3Main.exe build.
constexpr UCHAR kExpectedDigest[20] = {0x40, 0xbf, 0x68, 0xa5, 0x42, 0x46, 0xbc, 0xde, 0x2f, 0xb5,
                                       0xfc, 0xbc, 0x75, 0xb9, 0x4d, 0xc7, 0xc7, 0xf7, 0x83, 0x05};

// NTSTATUS values the hash code reports itself.
constexpr NTSTATUS kStatusNoMemory = static_cast<NTSTATUS>(0xC0000017L);
constexpr NTSTATUS kStatusInvalidParameter = static_cast<NTSTATUS>(0xC000000DL);

bool Succeeded(NTSTATUS status) {
    return status >= 0;
}

}  // namespace

HashCheck CheckSupportedExecutableHash(const wchar_t* path) {
    HANDLE file = CreateFileW(path, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, nullptr,
                              OPEN_EXISTING, FILE_FLAG_SEQUENTIAL_SCAN, nullptr);

    // The file could not be opened.
    if (file == INVALID_HANDLE_VALUE) {
        return {HashFailure::OpenFile, GetLastError(), 0, false};
    }

    BCRYPT_ALG_HANDLE algorithm = nullptr;
    BCRYPT_HASH_HANDLE hash = nullptr;
    PUCHAR hashObject = nullptr;
    HashFailure failure = HashFailure::None;
    DWORD win32Error = ERROR_SUCCESS;

    // Each step below runs only if `status` is still success (BCrypt's NTSTATUS
    // convention: negative is failure), threading the first failure through to
    // the cleanup at the end instead of nesting or early-returning.
    NTSTATUS status = BCryptOpenAlgorithmProvider(&algorithm, BCRYPT_SHA1_ALGORITHM, nullptr, 0);
    DWORD objectLength = 0;
    DWORD resultLength = 0;
    DWORD hashLength = 0;

    // Ask for the size of the hash object.
    if (Succeeded(status)) {
        status = BCryptGetProperty(algorithm, BCRYPT_OBJECT_LENGTH, reinterpret_cast<PUCHAR>(&objectLength),
                                   sizeof(objectLength), &resultLength, 0);
    }

    // Ask for the size of the digest.
    if (Succeeded(status)) {
        status = BCryptGetProperty(algorithm, BCRYPT_HASH_LENGTH, reinterpret_cast<PUCHAR>(&hashLength),
                                   sizeof(hashLength), &resultLength, 0);
    }

    // SHA-1 digests are 20 bytes; anything else is not the algorithm expected.
    if (Succeeded(status) && hashLength == sizeof(kExpectedDigest)) {
        hashObject = new (std::nothrow) UCHAR[objectLength];

        // Allocation failure is reported as a status, not thrown.
        if (hashObject) {
            status = BCryptCreateHash(algorithm, &hash, hashObject, objectLength, nullptr, 0, 0);
        } else {
            status = kStatusNoMemory;
        }
    } else if (Succeeded(status)) {
        status = kStatusInvalidParameter;
    }

    // Feed the file through the hash, 64 KiB at a time.
    UCHAR buffer[64 * 1024];
    DWORD bytesRead = 0;

    // Read until the end of the file or the first failure.
    while (Succeeded(status)) {
        // A failed read ends the loop with a ReadFile failure.
        if (!ReadFile(file, buffer, sizeof(buffer), &bytesRead, nullptr)) {
            failure = HashFailure::ReadFile;
            win32Error = GetLastError();
            break;
        }

        // Zero bytes read means the end of the file.
        if (!bytesRead) {
            break;
        }

        status = BCryptHashData(hash, buffer, bytesRead, 0);
    }

    UCHAR digest[20]{};

    // Finish the hash only when every step before succeeded.
    if (failure == HashFailure::None && Succeeded(status)) {
        status = BCryptFinishHash(hash, digest, sizeof(digest), 0);
    }

    // A failing BCrypt status is reported as a Crypto failure.
    if (failure == HashFailure::None && !Succeeded(status)) {
        failure = HashFailure::Crypto;
    }

    bool matches = false;

    // Compare the digest only when it was computed.
    if (failure == HashFailure::None) {
        matches = memcmp(digest, kExpectedDigest, sizeof(kExpectedDigest)) == 0;
    }

    // Release what was created.
    if (hash) {
        BCryptDestroyHash(hash);
    }

    delete[] hashObject;

    // Release the algorithm provider.
    if (algorithm) {
        BCryptCloseAlgorithmProvider(algorithm, 0);
    }

    CloseHandle(file);
    return {failure, win32Error, status, matches};
}

}  // namespace t3sdk::engine
