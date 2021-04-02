#include <iostream>
#include <string>

#include <log4cxx/propertyconfigurator.h>
using namespace log4cxx;
extern LoggerPtr logger;

class Component {
public:

  Component (const char* componentName);
  std::string   get_component_name();
private:
  std::string componentName;
};
