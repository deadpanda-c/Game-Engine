cmake_minimum_required(VERSION 3.22)
project(plugins_sfml)
set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES "src/*.cpp")
include_directories(include)

add_library(plugins_sfml SHARED ${SOURCES})
target_link_libraries(plugins_sfml PRIVATE sfml-graphics sfml-window sfml-system sfml-audio sfml-network)
