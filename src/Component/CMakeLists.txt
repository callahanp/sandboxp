message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
add_library(Component Component.cpp)
target_include_directories(Component
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )
