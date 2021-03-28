# note order here affects link order, and hence linking correctness
# on systems with a traditional ld (eg, GNU ld on Linux)
# This is in place in case we do sub-projects currently there is none
# so everything is in src

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
project(sandboxp VERSION 0.0)
foreach( srcFolder
         Component
         Main
        )
  include_directories (${srcFolder})
        add_subdirectory(${srcFolder})

endforeach( srcFolder )
