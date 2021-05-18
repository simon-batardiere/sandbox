# Copyright 2021 Simon Batardiere.
# All Rights Reserved.
#
# This file is part of the Sandbox project which is licensed under the Apache
# License 2.0 (the "License"). You may not use this file except in compliance
# with the License. You can obtain a copy in the file LICENSE in the source
# distribution.

add_library(sandbox ../include/sandbox/sandbox.h sandbox.cpp)
set_target_properties(sandbox PROPERTIES CXX_STANDARD 17)
target_include_directories(
	sandbox
	PUBLIC "${PROJECT_SOURCE_DIR}/include/sandbox"
)

