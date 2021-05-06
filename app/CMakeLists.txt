add_executable(app main.cpp)
set_target_properties(app PROPERTIES CXX_STANDARD 17)
target_include_directories(
	app
	PUBLIC "${PROJECT_SOURCE_DIR}/include/sandbox"
)
target_link_libraries(app PUBLIC Sandbox)

