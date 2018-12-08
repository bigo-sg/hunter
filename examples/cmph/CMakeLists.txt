cmake_minimum_required(VERSION 3.0)

include("../common.cmake")

project(download-cmph)
hunter_add_package(cmph)

find_package(cmph CONFIG REQUIRED)
add_executable(cmph main.cpp)
target_link_libraries(cmph PUBLIC PkgConfig::cmph)
