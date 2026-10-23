# Difficulty fixes mod; see difficulty.cpp. Its settings file goes next to it.
add_library(difficulty_fixes_mod SHARED difficulty.cpp)
target_link_libraries(difficulty_fixes_mod PRIVATE t3sdk_headers)
set_target_properties(difficulty_fixes_mod PROPERTIES
  OUTPUT_NAME difficulty-fixes
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
configure_file(difficulty-fixes.ini ${T3SDK_BIN_DIR}/mods/difficulty-fixes.ini COPYONLY)
