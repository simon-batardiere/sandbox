enable_testing()

add_executable(sandbox_test sandbox.cpp)
target_include_directories(sandbox_test PUBLIC
        ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(sandbox_test PUBLIC gtest_main sandbox)

include(GoogleTest)
gtest_discover_tests(sandbox_test)

