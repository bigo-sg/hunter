# Copyright (c) 2013-2014, Ruslan Baratov
# All rights reserved.

# !!! DO NOT PLACE HEADER GUARDS HERE !!!

include(hunter_add_version)
include(hunter_cacheable)
include(hunter_check_toolchain_definition)
include(hunter_cmake_args)
include(hunter_download)
include(hunter_pick_scheme)

hunter_add_version(
  PACKAGE_NAME
  openssl
  VERSION
  "1.0.2o"
  URL
  "https://github.com/openssl/openssl/archive/OpenSSL_1_0_2o.tar.gz"
  SHA1
  ec7ad3650206f1045d48f2fe9ed4ad93a1228ec5
  )

hunter_pick_scheme(DEFAULT url_sha1_openssl)
hunter_cacheable(openssl)
#hunter_download(PACKAGE_NAME openssl PACKAGE_INTERNAL_DEPS_ID "26")
