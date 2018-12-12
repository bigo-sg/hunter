cmake_minimum_required(VERSION 3.0)

include("../common.cmake")

project(download-Protobuf)

option(protobuf_MODULE_COMPATIBLE "use protobuf in module compatible mode" OFF)

hunter_add_package(protobuf)

find_package(protobuf REQUIRED)

add_subdirectory(messages)

add_executable(main main.cpp)
target_link_libraries(main messages)
