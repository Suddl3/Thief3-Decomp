# Widescreen FOV mod (Hor+); see fov.cpp. Its settings file goes next to it.
add_library(widescreen_fov_mod SHARED fov.cpp)
target_link_libraries(widescreen_fov_mod PRIVATE t3sdk_headers)
set_target_properties(widescreen_fov_mod PROPERTIES
  OUTPUT_NAME widescreen-fov
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
configure_file(widescreen-fov.ini ${T3SDK_BIN_DIR}/mods/widescreen-fov.ini COPYONLY)
