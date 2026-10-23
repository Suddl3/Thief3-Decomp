# Example mod target; see hello.cpp for the API walkthrough and
# sdk/CMakeLists.txt for how a mod gets registered here. It builds into
# examples/, beside bin/: bin/ is what installs into the game and ships with
# a release, and an example is for reading, not for players.
add_library(hello_mod SHARED hello.cpp)
target_link_libraries(hello_mod PRIVATE t3sdk_headers)
set_target_properties(hello_mod PROPERTIES
  OUTPUT_NAME hello
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/examples)
