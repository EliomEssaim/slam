cmake_minimum_required(VERSION 2.6)
project(useeigen)

include_directories( "/usr/include/eigen3")
add_executable(useeigen main.cpp)

install(TARGETS useeigen RUNTIME DESTINATION bin)
