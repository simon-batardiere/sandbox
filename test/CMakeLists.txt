mark_as_advanced(
	BUILD_GMOCK BUILD_GTEST BUILD_SHARED_LIBS
	gmock_build_tests gtest_build_samples gtest_build_tests
	gtest_disable_pthreads gtest_force_shared_crt gtest_hide_internal_symbols
)

set_target_properties(gtest PROPERTIES FOLDER extern)
set_target_properties(gtest_main PROPERTIES FOLDER extern)
set_target_properties(gmock PROPERTIES FOLDER extern)
set_target_properties(gmock_main PROPERTIES FOLDER extern)

add_executable(test main.cpp sandbox.cpp)
target_include_directories(test PUBLIC
	../third-party/googletest/googletest/include
        ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(test PUBLIC gtest Sandbox)

