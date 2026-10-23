# Player tweaks mod; see player_tweaks.cpp. Its settings file goes next to it.
add_library(player_tweaks_mod SHARED player_tweaks.cpp)
target_link_libraries(player_tweaks_mod PRIVATE t3sdk_headers)
set_target_properties(player_tweaks_mod PROPERTIES
  OUTPUT_NAME player-tweaks
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
configure_file(player-tweaks.ini ${T3SDK_BIN_DIR}/mods/player-tweaks.ini COPYONLY)
