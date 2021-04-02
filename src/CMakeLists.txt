# note order here affects link order, and hence linking correctness
# on systems with a traditional ld (eg, GNU ld on Linux)
# This is in place in case we do sub-projects currently there is none
# so everything is in src

# specify the C++ standard
message("")
message("Building sandboxp")
message("")
message(CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR})
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/CMakeModules;${CMAKE_MODULE_PATH}")
message("CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")
message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
project(sandboxp VERSION 0.0)
find_package(Log4cxx REQUIRED)
foreach( srcFolder
         Data
         Message
         Component
         Main
        )
        include_directories (${srcFolder})
        add_subdirectory(${srcFolder})

endforeach( srcFolder )
