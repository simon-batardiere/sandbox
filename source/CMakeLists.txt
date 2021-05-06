add_library(Sandbox ../include/sandbox/sandbox.h sandbox.cpp)
set_target_properties(Sandbox PROPERTIES CXX_STANDARD 17)
target_include_directories(
	Sandbox
	PUBLIC "${PROJECT_SOURCE_DIR}/include/sandbox"
)

