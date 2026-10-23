# First-person death mod; see first_person_death.cpp. Its settings file goes next to it.
add_library(first_person_death_mod SHARED first_person_death.cpp)
target_link_libraries(first_person_death_mod PRIVATE t3sdk_headers)
set_target_properties(first_person_death_mod PROPERTIES
  OUTPUT_NAME first-person-death
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
configure_file(first-person-death.ini ${T3SDK_BIN_DIR}/mods/first-person-death.ini COPYONLY)
