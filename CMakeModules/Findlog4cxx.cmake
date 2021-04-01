# Locate LOG4CXX.
#
# This module defines
# LOG4CXX_FOUND
# LOG4CXX_LIBRARIES
# LOG4CXX_INCLUDE_DIR

# Find LOG4CXX.
message("Find log4cxx.cmake")
if (NOT LOG4CXX_LIBRARIES AND NOT LOG4CXX_INCLUDE_DIR)
    # Find the headers.
    find_path(LOG4CXX_INCLUDE_DIR
        NAMES
            log4cxx/log4cxx.h
        PATHS
            /usr/include
            /usr/local/include
            /opt/include
            /opt/local/include
            /sw/include
    )

    # Find the library.
    find_library(LOG4CXX_LIBRARIES
        NAMES
            log4cxx
        PATHS
            /usr/lib
            /usr/local/lib
            /opt/lib
            /opt/local/lib
            /sw/lib
    )

endif ()


# Pre-set or found.
if (LOG4CXX_LIBRARIES AND LOG4CXX_INCLUDE_DIR)
    set(LOG4CXX_FOUND TRUE)
    message(STATUS "LOG4CXX library found: ${LOG4CXX_LIBRARIES}")
    message(STATUS "LOG4CXX include directory found: ${LOG4CXX_INCLUDE_DIR}")
endif ()
