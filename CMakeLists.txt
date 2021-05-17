cmake_minimum_required(VERSION 3.13)

project(
	Sandbox
	VERSION 0.1
	LANGUAGES CXX
)

option(${PROJECT_NAME}_ENABLE_TEST "Enable test coverage." ON)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
	message(FATAL_ERROR "In-source builds is not allowed.")
endif()

add_subdirectory(third-party)
add_subdirectory(source)
if(${PROJECT_NAME}_ENABLE_TEST)
	add_subdirectory(test)
endif()

