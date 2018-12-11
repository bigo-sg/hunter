# Copyright (c) 2014, Ruslan Baratov
# All rights reserved.

cmake_minimum_required(VERSION 3.0)

include("../common.cmake")

project(download-openssl)

hunter_add_package(openssl)
find_package(openssl REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC openssl::SSL openssl::Crypto)
