#include <iostream>
#include <sandboxpConfig.h>
int main(int argc, char* argv[]) {
  // report version
  std::cout << argv[0] << " Version " << Sandboxp_VERSION_MAJOR << "."
        << Sandboxp_VERSION_MINOR << std::endl;

    return 0;
}
