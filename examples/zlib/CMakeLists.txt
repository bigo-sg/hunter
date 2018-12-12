cmake_minimum_required(VERSION 3.0)

include("../common.cmake")

project(download-zlib)
hunter_add_package(zlib)

find_package(zlib CONFIG REQUIRED)
add_executable(main main.cpp)
target_link_libraries(main PUBLIC z)
