#include <iostream>
#include <string>
class Component {
public:

  Component (const char* componentName) {
    Component::componentName = componentName;
    std::cout << "Created Component: " << Component::componentName <<std::endl;
  }
  std::string get_component_name(){
    return componentName;
  }
private:
  std::string componentName;
};
