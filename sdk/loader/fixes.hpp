#pragma once

// Options for fixes.cpp's small built-in gameplay/start-up fixes.
namespace t3sdk::fixes {

// Which fixes to install; read from T3SDK.ini's [Fixes] section.
struct Options {
    bool skipIntros = false;  // SkipIntros: do not play the logo movies at start-up
};

// Installs the game fixes the options enable. Call once at start-up, after
// MinHook is initialised.
void Install(const Options& options);

}  // namespace t3sdk::fixes
