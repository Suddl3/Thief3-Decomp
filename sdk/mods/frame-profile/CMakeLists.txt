# Frame profile: a development tool (see frame_profile.cpp). It builds into
# examples/, beside bin/, so it is neither installed with T3SDK nor shipped;
# copy it into System\mods by hand for a test.
add_library(frame_profile_mod SHARED frame_profile.cpp)
target_link_libraries(frame_profile_mod PRIVATE t3sdk_headers)
set_target_properties(frame_profile_mod PROPERTIES
  OUTPUT_NAME frame-profile
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/examples)
