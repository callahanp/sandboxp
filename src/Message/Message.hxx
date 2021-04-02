#pragma once
#include <iostream>
#include <string>

#include <log4cxx/propertyconfigurator.h>
using namespace log4cxx;
extern LoggerPtr logger;

class Message {
public:
  static int nextMessageId;
  Message (const char* messageName);
  std::string get_message_name();
private:
  std::string messageName;
  int messageId;
};
