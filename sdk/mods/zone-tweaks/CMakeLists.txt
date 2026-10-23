# Zone tweaks mod; see zone_tweaks.cpp. Its settings file goes next to it.
add_library(zone_tweaks_mod SHARED zone_tweaks.cpp)
target_link_libraries(zone_tweaks_mod PRIVATE t3sdk_headers)
set_target_properties(zone_tweaks_mod PROPERTIES
  OUTPUT_NAME zone-tweaks
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
configure_file(zone-tweaks.ini ${T3SDK_BIN_DIR}/mods/zone-tweaks.ini COPYONLY)
