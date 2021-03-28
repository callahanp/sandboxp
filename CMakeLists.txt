cmake_minimum_required(VERSION 3.16.3)
project (sandboxp)
# note order here affects link order, and hence linking correctness
# on systems with a traditional ld (eg, GNU ld on Linux)
# This is in place in case we do sub-projects currently there is none
# so everything is in src
foreach( projectFolder
         src
        )
  include_directories (${projectFolder})
        add_subdirectory(${projectFolder})

endforeach( projectFolder )

