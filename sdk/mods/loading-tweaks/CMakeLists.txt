# Loading screen tweaks mod; see loading_tweaks.cpp. Its settings file goes next to it.
add_library(loading_tweaks_mod SHARED loading_tweaks.cpp)
target_link_libraries(loading_tweaks_mod PRIVATE t3sdk_headers)
set_target_properties(loading_tweaks_mod PROPERTIES
  OUTPUT_NAME loading-tweaks
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
configure_file(loading-tweaks.ini ${T3SDK_BIN_DIR}/mods/loading-tweaks.ini COPYONLY)
