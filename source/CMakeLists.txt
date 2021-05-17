add_library(sandbox ../include/sandbox/sandbox.h sandbox.cpp)
set_target_properties(sandbox PROPERTIES CXX_STANDARD 17)
target_include_directories(
	sandbox
	PUBLIC "${PROJECT_SOURCE_DIR}/include/sandbox"
)

