#------------------------------------------------------------------------------
# test function 
#------------------------------------------------------------------------------

function(leet_test test_name compile_file)
  add_executable(${test_name} ${compile_file})
  target_link_libraries(${test_name} leet gtest_main)
  add_test(NAME ${test_name} COMMAND ${test_name})
endfunction()

