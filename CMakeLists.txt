cmake_minimum_required(VERSION 3.13)

project(
	Sandbox
	VERSION 0.1
	LANGUAGES CXX
)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
	message(FATAL_ERROR "In-source builds is not allowed.")
endif()

add_subdirectory(source)
add_subdirectory(app)

