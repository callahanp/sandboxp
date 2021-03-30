#include <iostream>
#include <sandboxpConfig.h>
#include <Component.hxx>
#include <Message.hxx>
#include <Data.hxx>
int main(int argc, char* argv[]) {
  // report version
  std::cout << argv[0] << " Version " << Sandboxp_VERSION_MAJOR << "."
            << Sandboxp_VERSION_MINOR << std::endl;

  int MainSheetCleatedAtInches=42;
  int BoomAngle=105;
  Component("Keel");
  Component("Hull");
  Component("Deck");
  Component("Cabin");
  Component("Mast");
  Component("Boom");
  Component("Vang");
  Component("MainSheet");
  Component("Spinnaker");
  Component("Genoa");
  Component("MainSail");
  Component("Cleats");
  Component("Winches");
  Component("Tiller");
  Component("Dunsel");
  Component("Sea");
  Component("Wind");
  Component("Crew");
  Component("Helm");
  Component("Simulation");
  Data("MainSheetCleatedAtInches", MainSheetCleatedAtInches);
  Data("Boom", BoomAngle);
  Message("Crew says: Running With the Wind");
  Message("Helm says: Prepare to gybe.");
  Message("Crew says: Ready");
  Message("Helm says: Gybe Ho!");
  MainSheetCleatedAtInches = -1;
  BoomAngle=170;
  BoomAngle=255;

  Data("BoomAngle", BoomAngle);
  return 0;
}
