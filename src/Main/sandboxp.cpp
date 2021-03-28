#include <iostream>
#include <sandboxpConfig.h>
#include <Component.hxx>
int main(int argc, char* argv[]) {
  // report version
  std::cout << argv[0] << " Version " << Sandboxp_VERSION_MAJOR << "."
            << Sandboxp_VERSION_MINOR << std::endl;
  Component("Hull");
  Component("Keel");
  Component("Deck");
  Component("Cabin");
  Component("Mast");
  Component("Spinnaker");
  Component("Genoa");
  Component("Main");
  Component("Cleats");
  Component("Winches");
  Component("Tiller");
  Component("Dunsel");
  return 0;
}
