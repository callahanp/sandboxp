add_library(Data Data.cxx)
target_include_directories(Data
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )
