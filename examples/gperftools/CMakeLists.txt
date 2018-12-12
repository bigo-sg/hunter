cmake_minimum_required(VERSION 3.0)

include("../common.cmake")

project(download-gperftools)
hunter_add_package(gperftools)

find_package(gperftools REQUIRED)
add_executable(gperftools main.cpp)
target_link_libraries(gperftools PUBLIC gperftools::tcmalloc)
