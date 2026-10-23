# Unstick mod; see unstick.cpp. Its settings file goes next to it.
add_library(unstick_mod SHARED unstick.cpp)
target_link_libraries(unstick_mod PRIVATE t3sdk_headers)
set_target_properties(unstick_mod PROPERTIES
  OUTPUT_NAME unstick
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
configure_file(unstick.ini ${T3SDK_BIN_DIR}/mods/unstick.ini COPYONLY)
