#include <iostream>
#include <string>
#include <Message.hxx>

int Message::nextMessageId=0;

Message::Message (const char* messageName) {
    messageId = ++nextMessageId;
    Message::messageName = messageName;
    std::cout << "Created Message: " << Message::messageName <<std::endl;
    std::cout << "Message id: " << messageId << std::endl;
  }
std::string Message::get_message_name(){
    return messageName;
  }
