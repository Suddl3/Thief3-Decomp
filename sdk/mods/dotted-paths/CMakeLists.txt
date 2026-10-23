# Dotted install paths mod; see dotted_paths.cpp.
add_library(dotted_paths_mod SHARED dotted_paths.cpp)
target_link_libraries(dotted_paths_mod PRIVATE t3sdk_headers)
set_target_properties(dotted_paths_mod PROPERTIES
  OUTPUT_NAME dotted-paths
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
