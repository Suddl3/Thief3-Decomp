// Dying keeps the first-person view instead of pulling the camera out behind
// Garrett. The death camera is a mode of System/T3Camera.ini (not a Config
// INI): "CameraMode DeathCam" inherits from FarThirdPerson. At start the mod
// copies the installed T3Camera.ini into its own folder with DeathCam
// inheriting from FirstPerson, and serves that copy through AddFileRoot; the
// game folder is not touched, and the copy is made again at every start from
// whatever is installed.
//
// Settings, in first-person-death.ini next to the DLL:
//   [Death]
//   Enabled=0   1 = first-person death camera
#include <t3sdk/modkit.hpp>

#include <windows.h>

#include <fstream>
#include <sstream>
#include <string>

namespace {

// The camera file with DeathCam's InheritsFrom line pointing at FirstPerson;
// empty when the file has no DeathCam block to change.
std::string WithFirstPersonDeath(const std::string& text) {
    std::istringstream in(text);
    std::string out;
    std::string line;
    bool inDeathCam = false;
    bool changed = false;

    // Go through the camera file line by line.
    while (std::getline(in, line)) {
        // The line without surrounding blanks and its carriage return.
        std::string trimmed = line.substr(0, line.find_last_not_of(" \t\r") + 1);
        size_t first = trimmed.find_first_not_of(" \t");
        std::string word = first == std::string::npos ? "" : trimmed.substr(first);

        // A camera mode starts: the lines that follow belong to the death camera only if it is DeathCam.
        if (word.rfind("CameraMode", 0) == 0) {
            inDeathCam = word.find("DeathCam") != std::string::npos;
        } else if (word.rfind("EndCameraMode", 0) == 0) {
            inDeathCam = false;
        } else if (inDeathCam && word.rfind("InheritsFrom", 0) == 0) {
            line = "\tInheritsFrom FirstPerson\r";
            changed = true;
        }

        out += line + "\n";
    }

    return changed ? out : std::string();
}

}  // namespace

T3SDK_EXPORT int T3SDK_CALL T3Mod_Init(const T3SdkApi* api) {
    // The mod needs T3SDK API version 2: stay unloaded on an older SDK.
    if (api->version < 2) {
        return 1;
    }

    // Off by default.
    if (!t3mod::ReadBool(t3mod::SettingsFile(), L"Death", L"Enabled", false)) {
        api->Log("off (Enabled=0)");
        return 1;
    }

    // Read the installed camera file and change the death camera in it.
    std::ifstream in(t3mod::SystemFile(L"T3Camera.ini"), std::ios::binary);
    std::stringstream original;
    original << in.rdbuf();
    std::string changed = WithFirstPersonDeath(original.str());

    // Without a DeathCam block there is nothing to change.
    if (changed.empty()) {
        api->Log("no DeathCam camera mode in T3Camera.ini; off");
        return 1;
    }

    // <mod>_files/System/T3Camera.ini mirrors <game>/System/T3Camera.ini.
    std::wstring root = t3mod::ModFile(L"_files");
    CreateDirectoryW(root.c_str(), nullptr);
    CreateDirectoryW((root + L"\\System").c_str(), nullptr);
    std::ofstream out(root + L"\\System\\T3Camera.ini", std::ios::binary | std::ios::trunc);
    out << changed;
    out.close();

    // A failed write leaves no usable copy.
    if (!out) {
        api->Log("could not write the camera file; off");
        return 1;
    }

    // Serve the copy in place of the installed file.
    char rootUtf8[MAX_PATH * 3];
    WideCharToMultiByte(CP_UTF8, 0, root.c_str(), -1, rootUtf8, sizeof(rootUtf8), nullptr, nullptr);

    // Without the file root the game keeps reading its own camera file.
    if (api->AddFileRoot(rootUtf8) != 0) {
        api->Log("file override failed; off");
        return 1;
    }

    api->Log("death camera stays in first person");
    return 0;
}
