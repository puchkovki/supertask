#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "sort" for configuration ""
set_property(TARGET sort APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(sort PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsort.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS sort )
list(APPEND _IMPORT_CHECK_FILES_FOR_sort "${_IMPORT_PREFIX}/lib/libsort.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
