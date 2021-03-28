configure_file(sandboxpConfig.h.in sandboxpConfig.h)
add_executable ( sandboxp sandboxp.cpp)
target_link_libraries(sandboxp PUBLIC Component)
target_include_directories(sandboxp PUBLIC
  "${PROJECT_BINARY_DIR}/Main"
  "${PROJECT_SOURCE_DIR}/Component"
  )
install(TARGETS sandboxp DESTINATION bin)
