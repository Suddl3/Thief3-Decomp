# HUD tweaks mod; see hud_tweaks.cpp. Its settings file goes next to it.
add_library(hud_tweaks_mod SHARED hud_tweaks.cpp)
target_link_libraries(hud_tweaks_mod PRIVATE t3sdk_headers)
set_target_properties(hud_tweaks_mod PROPERTIES
  OUTPUT_NAME hud-tweaks
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
configure_file(hud-tweaks.ini ${T3SDK_BIN_DIR}/mods/hud-tweaks.ini COPYONLY)
