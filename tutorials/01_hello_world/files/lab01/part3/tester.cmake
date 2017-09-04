separate_arguments( ARGS )
# Run the test
execute_process( 
  COMMAND ${EXE} 
  INPUT_FILE ../tests/test-${ID}.in
  OUTPUT_FILE test-${ID}.out
  RESULT_VARIABLE run_not_successful
)

if( run_not_successful)
  message( SEND_ERROR "Test ${ID} could not be executed")
else( run_not_successful)
  execute_process( 
    COMMAND ${CMAKE_COMMAND} -E compare_files ../tests/test-${ID}.expected test-${ID}.out
    RESULT_VARIABLE test_not_successful
    )
endif( run_not_successful )


if( test_not_successful)
   message( SEND_ERROR "../tests/test-${ID}.expected does not match test-${ID}.out")
endif( test_not_successful )
