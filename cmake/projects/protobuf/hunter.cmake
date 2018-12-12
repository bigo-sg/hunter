# !!! DO NOT PLACE HEADER GUARDS HERE !!!

include(hunter_add_version)
include(hunter_cacheable)
include(hunter_cmake_args)
include(hunter_download)
include(hunter_pick_scheme)
include(hunter_register_dependency)
include(hunter_configuration_types)

hunter_add_version(
  PACKAGE_NAME protobuf
  VERSION "3.5.1"
  URL "https://github.com/google/protobuf/archive/v3.5.1.zip"
  SHA1 "4483423b7d97ebbb9bcd85cd69df809f5df01f76"
  )

hunter_configuration_types(protobuf CONFIGURATION_TYPES Release)

hunter_cmake_args(
  protobuf
  CMAKE_ARGS
  EXTRA_FLAGS=--with-zip --disable-shared --enable-static
  PKGCONFIG_EXPORT_TARGETS=protobuf
  )

hunter_pick_scheme(DEFAULT url_sha1_autogen_autotools)
hunter_cacheable(protobuf)
hunter_download(PACKAGE_NAME protobuf)
hunter_register_dependency(
  PACKAGE "protobuf"
  DEPENDS_ON_PACKAGE "zlib"
  )
