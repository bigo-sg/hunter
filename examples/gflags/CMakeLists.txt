cmake_minimum_required(VERSION 3.1)

include("../common.cmake")

project(download-gflags)

hunter_add_package(gflags)

find_package(gflags CONFIG REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main gflags)
