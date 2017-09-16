cmake_minimum_required(VERSION 3.5.1)

project(part1)

# in case you decide to use gcc
IF(CMAKE_COMPILER_IS_GNUCC)
   SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "--std=c++14 -pedantic -Wall -Wextra")
ENDIF(CMAKE_COMPILER_IS_GNUCC)

# make Visual studio and Xcode output the binaries in the same build directory
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}")
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}")

set(binary link-list)

add_executable(${binary} ${binary}.cpp  )


target_compile_features(${binary} PRIVATE cxx_decltype_auto cxx_auto_type)


enable_testing()

# set the binary to bes tested in each of the tests below. 
set(test_cmd ${CMAKE_BINARY_DIR}/${binary}${CMAKE_EXECUTABLE_SUFFIX} )
set(tester   ${CMAKE_CURRENT_SOURCE_DIR}/tester.cmake)
set(tests_loc ${CMAKE_CURRENT_SOURCE_DIR}/tests)

add_test(
    NAME test01 
    COMMAND ${CMAKE_COMMAND} -DEXE=${test_cmd} -D ID=01 -DLOC=${tests_loc} -P ${tester}
)

