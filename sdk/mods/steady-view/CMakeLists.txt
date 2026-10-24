# Steady view mod; see steady_view.cpp. Its settings file goes next to it.
add_library(steady_view_mod SHARED steady_view.cpp)
target_link_libraries(steady_view_mod PRIVATE t3sdk_headers)
set_target_properties(steady_view_mod PROPERTIES
  OUTPUT_NAME steady-view
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
configure_file(steady-view.ini ${T3SDK_BIN_DIR}/mods/steady-view.ini COPYONLY)
