find_library(gperftools_LIBRARY NAMES tcmalloc)

find_package_handle_standard_args(gperftools DEFAULT_MSG gperftools_LIBRARY)
mark_as_advanced(gperftools_LIBRARY)

add_library(gperftools::tcmalloc UNKNOWN IMPORTED)
set_target_properties(gperftools::tcmalloc PROPERTIES IMPORTED_LINK_INTERFACE_LANGUAGE "C" IMPORTED_LOCATION "${gperftools_LIBRARY}")
#set(gperftools_LIBRARIES ${gperftools_LIBRARY})

