# Save trace: a development tool (see save_trace.cpp). It builds into
# examples/, beside bin/, so it is neither installed with T3SDK nor shipped;
# copy it into System\mods by hand for a test.
add_library(save_trace_mod SHARED save_trace.cpp)
target_link_libraries(save_trace_mod PRIVATE t3sdk_headers)
set_target_properties(save_trace_mod PROPERTIES
  OUTPUT_NAME save-trace
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/examples)
