# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_batrobot_moveits_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED batrobot_moveits_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(batrobot_moveits_FOUND FALSE)
  elseif(NOT batrobot_moveits_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(batrobot_moveits_FOUND FALSE)
  endif()
  return()
endif()
set(_batrobot_moveits_CONFIG_INCLUDED TRUE)

# output package information
if(NOT batrobot_moveits_FIND_QUIETLY)
  message(STATUS "Found batrobot_moveits: 0.0.0 (${batrobot_moveits_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'batrobot_moveits' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${batrobot_moveits_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(batrobot_moveits_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${batrobot_moveits_DIR}/${_extra}")
endforeach()
