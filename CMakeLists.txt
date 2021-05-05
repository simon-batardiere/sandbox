cmake_minimum_required(VERSION 3.13)

project(
	Sandbox
	VERSION 0.1
	LANGUAGES CXX
)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
	message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there.")
endif()

add_executable(Sandbox source/main.cpp)

