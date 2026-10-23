#pragma once

// SHA-1 of T3Main.exe via Windows CNG (BCrypt), so the SDK can refuse to run
// against a build it was not verified on even if the timestamp/image size
// happen to match. See engine.cpp's SupportedExecutableHash for the call site
// and docs/sdk.md for the expected hash.

#include <windows.h>
#include <bcrypt.h>

namespace t3sdk::engine {

// Which step of the check failed, or None when the hash was computed.
enum class HashFailure { None, OpenFile, ReadFile, Crypto };

// The outcome of CheckSupportedExecutableHash.
struct HashCheck {
    HashFailure failure;
    DWORD win32Error;       // GetLastError() for OpenFile and ReadFile
    NTSTATUS cryptoStatus;  // the BCrypt status; meaningful for Crypto
    bool matches;           // true only when failure is None and the digest equals the supported build's
};

// Hashes the file at `path` with SHA-1 and compares the digest with the
// supported T3Main.exe build's. Any thread; reads the whole file.
HashCheck CheckSupportedExecutableHash(const wchar_t* path);

}  // namespace t3sdk::engine
