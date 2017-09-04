cmake_minimum_required(VERSION 2.8.9)
project(helloworld)

IF(CMAKE_COMPILER_IS_GNUCC)
   SET(CMAKE_CXX_FLAGS "--std=c++14 -pedantic -Wall -Wextra")
ENDIF(CMAKE_COMPILER_IS_GNUCC)

add_executable(helloword hello.cpp)

