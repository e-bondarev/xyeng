cmake_minimum_required(VERSION 3.16)

project(xyeng-api VERSION 0.0.1)

file(GLOB_RECURSE src src/*.cpp)

add_subdirectory(external/glfw)

if(XY_API_DYNAMIC)
	add_definitions(-D XY_API_DYNAMIC)

	add_library(xyeng-api SHARED 	${src}) # shared lib (xyeng-api)
	target_include_directories(xyeng-api 	PUBLIC include src)
	target_include_directories(xyeng-api	PUBLIC external/glfw/include)
	target_link_libraries(xyeng-api 	glfw)
elseif(XY_API_STATIC)
	add_definitions(-D XY_API_STATIC)

	add_library(xyeng-api-s  		${src})	# static lib (xyeng-api-s)
	target_include_directories(xyeng-api-s 	PUBLIC include src)
	target_include_directories(xyeng-api-s	PUBLIC external/glfw/include)
	target_link_libraries(xyeng-api-s 	glfw)
endif()