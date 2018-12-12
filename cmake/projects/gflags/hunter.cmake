include(hunter_add_version)
include(hunter_cacheable)
include(hunter_cmake_args)
include(hunter_download)
include(hunter_pick_scheme)

hunter_add_version(
  PACKAGE_NAME gflags
  VERSION 2.2.1
  URL "https://github.com/gflags/gflags/archive/v2.2.1.tar.gz"
  SHA1 b1c82261c8b9c87fb2fb5de6bdf70121ad1cca58
  )

hunter_cmake_args(
  gflags
  CMAKE_ARGS
  REGISTER_INSTALL_PREFIX=OFF
  )

hunter_pick_scheme(DEFAULT url_sha1_cmake)
hunter_cacheable(gflags)
hunter_download(PACKAGE_NAME gflags)
