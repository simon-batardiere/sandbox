if(${PROJECT_NAME}_ENABLE_TEST)
	add_subdirectory(googletest)
	enable_testing()
	include(GoogleTest)
endif()

