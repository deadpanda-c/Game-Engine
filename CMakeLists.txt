cmake_minimum_required(VERSION 3.22)
project(game-engine)
set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES "src/*.cpp")
include_directories(include)

set(EXAMPLE 
	main.cpp)


add_library(game-engine SHARED ${SOURCES})

add_executable(example ${EXAMPLE})
target_link_libraries(example game-engine)
