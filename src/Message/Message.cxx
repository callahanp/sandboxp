#include <iostream>
#include <string>
#include <Message.hxx>

int Message::nextMessageId=0;

Message::Message (const char* messageName) {
    messageId = ++nextMessageId;
    Message::messageName = messageName;
    LOG4CXX_INFO(logger, "Data Constructor");
    LOG4CXX_INFO(logger, "Message Name: " << Message::messageName);
    LOG4CXX_INFO(logger, "Message id: " << messageId);
  }
std::string Message::get_message_name(){
    return messageName;
  }
