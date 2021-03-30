#pragma once
#include <iostream>
#include <string>
class Message {
public:
  static int nextMessageId;
  Message (const char* messageName);
  std::string get_message_name();
private:
  std::string messageName;
  int messageId;
};
