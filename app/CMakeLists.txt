add_executable(app main.cpp)
target_include_directories(
	app
	PUBLIC "${PROJECT_SOURCE_DIR}/include/sandbox"
)
target_link_libraries(app PUBLIC Sandbox)

