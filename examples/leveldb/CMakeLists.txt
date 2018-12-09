cmake_minimum_required(VERSION 3.1)

include("../common.cmake")

project(download-leveldb)

hunter_add_package(leveldb)

find_package(leveldb CONFIG REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main leveldb)
