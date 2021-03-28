configure_file(sandboxpConfig.h.in sandboxpConfig.h)
add_executable ( sandboxp sandboxp.cpp)
target_include_directories(sandboxp PUBLIC
                           "${PROJECT_BINARY_DIR}/Main"
                           )
install(TARGETS sandboxp ${CMAKE_INSTALL_})
message( "project binary dir: ${PROJECT_BINARY_DIR}")
