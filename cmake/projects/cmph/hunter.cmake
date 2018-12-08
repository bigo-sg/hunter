include(hunter_add_version)
include(hunter_cacheable)
include(hunter_download)
include(hunter_pick_scheme)
include(hunter_cmake_args)
include(hunter_configuration_types)

hunter_add_version(
  PACKAGE_NAME cmph
  VERSION "2.0"
  URL "https://nchc.dl.sourceforge.net/project/cmph/cmph/cmph-2.0.tar.gz"
  SHA1 "eabdd4cd9f9bb2fed6773caac8d91638ad2d02b7"
  )

hunter_configuration_types(cmph CONFIGURATION_TYPES Release)
hunter_cmake_args(
  cmph
  CMAKE_ARGS
  EXTRA_FLAGS=--enable-static --disable-shared
  PKGCONFIG_EXPORT_TARGETS=cmph
  )

hunter_pick_scheme(DEFAULT url_sha1_autotools)
hunter_cacheable(cmph)
hunter_download(PACKAGE_NAME cmph
  PACKAGE_INTERNAL_DEPS_ID "1"
  PACKAGE_UNRELOCATABLE_TEXT_FILES
  lib/pkgconfig/cmph.pc
  )
