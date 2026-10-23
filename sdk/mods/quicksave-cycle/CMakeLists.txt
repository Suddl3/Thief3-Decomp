# Quick save cycling mod; see quicksave_cycle.cpp. Its settings file goes next to it.
add_library(quicksave_cycle_mod SHARED quicksave_cycle.cpp)
target_link_libraries(quicksave_cycle_mod PRIVATE t3sdk_headers)
set_target_properties(quicksave_cycle_mod PROPERTIES
  OUTPUT_NAME quicksave-cycle
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
configure_file(quicksave-cycle.ini ${T3SDK_BIN_DIR}/mods/quicksave-cycle.ini COPYONLY)
