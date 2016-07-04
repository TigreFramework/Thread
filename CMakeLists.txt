cmake_minimum_required(VERSION 3.4)
project(Thread)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Thread.cpp Thread.h ThreadException.cpp ThreadException.h)
add_executable(Teste ${SOURCE_FILES})
add_library(Thread ${SOURCE_FILES})