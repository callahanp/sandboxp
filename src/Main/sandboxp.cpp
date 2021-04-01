#include <iostream>
#include <sandboxpConfig.h>
#include <Component.hxx>
#include <Message.hxx>
#include <Data.hxx>
#include <log4cxx/log4cxx.h>
#include "log4cxx/propertyconfigurator.h"
#include "log4cxx/helpers/exception.h"
using namespace log4cxx;
using namespace log4cxx::helpers;

int main(int argc, char* argv[]) {
  int result = EXIT_SUCCESS;
  LoggerPtr logger(Logger::getLogger("sandboxp"));
  std::string loggingPropertyFileName="../config/log4cxx.config";
try
{
  // Set up a simple configuration that logs on the console.
  log4cxx::PropertyConfigurator::configure(loggingPropertyFileName);

  LOG4CXX_INFO(logger, "Entering application.");

  // report version
  const char* region = "World";
  LOG4CXX_INFO(logger, "Simple message text.")
  LOG4CXX_INFO(logger, "Hello, " << region)
  //LOG4CXX_DEBUG(logger, L"Iteration " << i)
  //LOG4CXX_DEBUG(logger, "e^10 = " << std::scientific << exp(10.0))
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
  LOG4CXX_INFO(logger, "Exiting application.")
}
catch(Exception&)
{
  result = EXIT_FAILURE;
}

return result;
}
