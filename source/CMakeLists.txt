add_library(Sandbox ../include/sandbox/sandbox.h sandbox.cpp)
target_include_directories(
	Sandbox
	PUBLIC "${PROJECT_SOURCE_DIR}/include/sandbox"
)

