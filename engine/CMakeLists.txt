cmake_minimum_required(VERSION 3.16)

project(xyeng-engine VERSION 0.0.1)

file(GLOB_RECURSE src src/*.cpp)

add_executable(xyeng-engine ${src})

target_include_directories(xyeng-engine PUBLIC ../api/include)

target_link_libraries(xyeng-engine xyeng-api)