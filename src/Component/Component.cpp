#include <string>
#include <Component.hxx>

  Component::Component (const char* componentName) {
    Component::componentName = componentName;
    LOG4CXX_INFO(logger, "Component Constructor");
  }
  std::string Component::get_component_name(){
    return componentName;
  }
