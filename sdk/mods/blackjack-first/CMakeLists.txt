# Blackjack-first mod; see blackjack_first.cpp.
add_library(blackjack_first_mod SHARED blackjack_first.cpp)
target_link_libraries(blackjack_first_mod PRIVATE t3sdk_headers)
set_target_properties(blackjack_first_mod PROPERTIES
  OUTPUT_NAME blackjack-first
  RUNTIME_OUTPUT_DIRECTORY ${T3SDK_BIN_DIR}/mods)
