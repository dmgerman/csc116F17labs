cmake_minimum_required(VERSION 3.5.1)

project(lab09)

# in case you decide to use gcc
IF(CMAKE_COMPILER_IS_GNUCC)
   SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "--std=c++14 -pedantic -Wall -Wextra")
ENDIF(CMAKE_COMPILER_IS_GNUCC)

# make Visual studio and Xcode output the binaries in the same build directory
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}")
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}")

add_executable(part1 part1.cpp)
add_executable(part2 part2.cpp)
add_executable(part3 part3.cpp)
add_executable(part4 part4.cpp)


enable_testing()

set(tester   ${CMAKE_CURRENT_SOURCE_DIR}/tester.cmake)
set(tests_loc ${CMAKE_CURRENT_SOURCE_DIR}/tests)

add_test(
    NAME test01 
    COMMAND ${CMAKE_COMMAND} -DEXE=${CMAKE_BINARY_DIR}/part1${CMAKE_EXECUTABLE_SUFFIX} -D ID=01 -DLOC=${tests_loc} -P ${tester}
)

add_test(
    NAME test02
    COMMAND ${CMAKE_COMMAND} -DEXE=${CMAKE_BINARY_DIR}/part2${CMAKE_EXECUTABLE_SUFFIX} -D ID=02 -DLOC=${tests_loc} -P ${tester}
)

add_test(
    NAME test03 
    COMMAND ${CMAKE_COMMAND} -DEXE=${CMAKE_BINARY_DIR}/part3${CMAKE_EXECUTABLE_SUFFIX} -D ID=03 -DLOC=${tests_loc} -P ${tester}
)

add_test(
    NAME test04 
    COMMAND ${CMAKE_COMMAND} -DEXE=${CMAKE_BINARY_DIR}/part4${CMAKE_EXECUTABLE_SUFFIX} -D ID=04 -DLOC=${tests_loc} -P ${tester}
)
