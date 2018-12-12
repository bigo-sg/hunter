# !!! DO NOT PLACE HEADER GUARDS HERE !!!

include(hunter_add_version)
include(hunter_cacheable)
include(hunter_cmake_args)
include(hunter_download)
include(hunter_pick_scheme)

hunter_add_version(
  PACKAGE_NAME zlib
  VERSION "1.2.11"
  URL "https://sourceforge.net/projects/libpng/files/zlib/1.2.11/zlib-1.2.11.tar.xz/download"
  SHA1 "e1cb0d5c92da8e9a8c2635dfa249c341dfd00322"
  )

hunter_pick_scheme(DEFAULT url_sha1_cmake)
hunter_cacheable(zlib)
hunter_download(PACKAGE_NAME zlib
    PACKAGE_INTERNAL_DEPS_ID "1"
    PACKAGE_UNRELOCATABLE_TEXT_FILES 
    "share/pkgconfig/zlib.pc"
)
