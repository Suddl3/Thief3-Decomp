# End mission mod; see end_mission.cpp. Its settings file goes next to it.
add_library(end_mission_mod SHARED end_mission.cpp)
target_link_libraries(end_mission_mod PRIVATE t3sdk_headers)
set_target_properties(end_mission_mod PROPERTIES
  OUTPUT_NAME end-mission
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
configure_file(end-mission.ini ${T3SDK_BIN_DIR}/mods/end-mission.ini COPYONLY)
