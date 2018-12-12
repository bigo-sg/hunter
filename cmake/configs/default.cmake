# Copyright (c) 2013-2018, Ruslan Baratov
# All rights reserved.

# Do not place header guards here

# Set CMake variables:
#   * HUNTER_${PACKAGE_NAME}_VERSION

# Usage:
#   hunter_default_version(Foo VERSION 1.0.0)
#   hunter_default_version(Boo VERSION 1.2.3z)

include(hunter_default_version)
include(hunter_user_error)

hunter_default_version(cmph VERSION 2.0)
hunter_default_version(gflags VERSION 2.2.1)
hunter_default_version(gperftools VERSION 2.5)
hunter_default_version(leveldb VERSION 1.20)
hunter_default_version(openssl VERSION 1.0.2o)
hunter_default_version(protobuf VERSION 3.5.1)
hunter_default_version(zlib VERSION 1.2.11)
# NOTE: no names with spaces!

