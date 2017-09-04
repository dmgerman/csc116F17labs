cmake_minimum_required(VERSION 3.5.1)
project(readnumbers)

# in case you decide to use gcc
IF(CMAKE_COMPILER_IS_GNUCC)
   SET(CMAKE_CXX_FLAGS "--std=c++14 -pedantic -Wall -Wextra")
ENDIF(CMAKE_COMPILER_IS_GNUCC)

# make Visual studio output the binaries in the same build directory
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${OUTPUT_DIRECTORY}")
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${OUTPUT_DIRECTORY}")

# this is the line that says that what binary should be built
add_executable(readnumbers readnumbers.cpp)

# start tests here

enable_testing()

# set the binary to bes tested in each of the tests below. 
set(test_cmd ${CMAKE_BINARY_DIR}/readnumbers${CMAKE_EXECUTABLE_SUFFIX} )

add_test(
    NAME test01 
    COMMAND ${CMAKE_COMMAND} -DEXE=${test_cmd} -D ID=01 -P ../tester.cmake
)

add_test(
    NAME test02
    COMMAND ${CMAKE_COMMAND} -DEXE=${test_cmd} -D ID=02 -P ../tester.cmake
)

add_test(
    NAME test03 
    COMMAND ${CMAKE_COMMAND} -DEXE=${test_cmd} -D ID=03 -P ../tester.cmake
)

add_test(
    NAME test04
    COMMAND ${CMAKE_COMMAND} -DEXE=${test_cmd} -D ID=04 -P ../tester.cmake
)

add_test(
    NAME test05
    COMMAND ${CMAKE_COMMAND} -DEXE=${test_cmd} -D ID=05 -P ../tester.cmake
)
