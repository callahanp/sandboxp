add_library(Message Message.cxx)
target_include_directories(Message
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )
