cmake_minimum_required(VERSION 3.24)
project(VUtils)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(test)

add_library(VUtils INTERFACE)
target_include_directories(VUtils PUBLIC include)