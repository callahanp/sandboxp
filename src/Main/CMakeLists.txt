message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
configure_file(sandboxpConfig.h.in sandboxpConfig.h)
add_executable ( sandboxp sandboxp.cpp)
target_link_libraries(sandboxp PUBLIC Component Message  Data log4cxx)
target_include_directories(sandboxp PUBLIC
  "${PROJECT_BINARY_DIR}/Main"
  "${PROJECT_SOURCE_DIR}/Component"
  "${PROJECT_SOURCE_DIR}/Data"
  "${PROJECT_SOURCE_DIR}/Message"
  "${LOG4CXX_INCLUDE_DIR}"
  )
  message ("LOG4CXX_INCLUDE_DIR:${LOG4CXX_INCLUDE_DIR}")
  message ("target_include_directories: $(${CMAKE_INCLUDE_PATH})")
install(TARGETS sandboxp DESTINATION bin)
