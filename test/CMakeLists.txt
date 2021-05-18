# Copyright 2021 Simon Batardiere.
# All Rights Reserved.
#
# This file is part of the Sandbox project which is licensed under the Apache
# License 2.0 (the "License"). You may not use this file except in compliance
# with the License. You can obtain a copy in the file LICENSE in the source
# distribution.

enable_testing()

add_executable(sandbox_test sandbox.cpp)
target_include_directories(sandbox_test PUBLIC
        ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(sandbox_test PUBLIC gtest_main sandbox)

include(GoogleTest)
gtest_discover_tests(sandbox_test)

