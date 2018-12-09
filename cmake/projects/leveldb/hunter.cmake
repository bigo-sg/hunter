include(hunter_add_version)
include(hunter_cacheable)
include(hunter_download)
include(hunter_pick_scheme)
include(hunter_cmake_args)
include(hunter_configuration_types)

hunter_add_version(
  PACKAGE_NAME leveldb
  VERSION "1.20"
  URL "https://github.com/google/leveldb/archive/1cb384088184be9840bd59b4040503a9fa9aee66.zip"
  SHA1 "3af2b026d1777c383593e785644dad2aa90e174f"
  )

hunter_configuration_types(leveldb CONFIGURATION_TYPES Release)

hunter_cmake_args(leveldb CMAKE_ARGS
  LEVELDB_BUILD_TESTS=OFF
  LEVELDB_BUILD_BENCHMARKS=OFF
)

hunter_pick_scheme(DEFAULT url_sha1_cmake)
hunter_cacheable(leveldb)
hunter_download(PACKAGE_NAME leveldb)
