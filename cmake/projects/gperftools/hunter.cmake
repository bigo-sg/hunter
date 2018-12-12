include(hunter_add_version)
include(hunter_cacheable)
include(hunter_download)
include(hunter_pick_scheme)
include(hunter_cmake_args)
include(hunter_configuration_types)
include(hunter_pkgconfig_export_target)

hunter_add_version(
  PACKAGE_NAME gperftools
  VERSION "2.5"
  URL "https://github.com/gperftools/gperftools/releases/download/gperftools-2.5/gperftools-2.5.tar.gz"
  SHA1 "1e7069f23f926df84a541938a8e6078b0aedf218"
  )

hunter_configuration_types(gperftools CONFIGURATION_TYPES Release)
hunter_cmake_args(
  gperftools
  CMAKE_ARGS
  EXTRA_FLAGS=--enable-static --disable-shared --disable-libunwind
)

hunter_pick_scheme(DEFAULT url_sha1_autotools)
hunter_cacheable(gperftools)
hunter_download(PACKAGE_NAME gperftools)
