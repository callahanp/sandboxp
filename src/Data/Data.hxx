#pragma once
#include <iostream>
#include <string>

#include <log4cxx/log4cxx.h>
#include <log4cxx/propertyconfigurator.h>
using namespace log4cxx;
extern LoggerPtr logger;

class Data {
public:
  static int nextDataId;
  Data (const char* dataName);
  Data (const char* dataName, int& intReference);
  Data (const char* dataName, float& floatReference);
  Data (const char* dataName, std::string& stringReference);
  std::string get_data_name();

  enum dataTypes  { BIT, BYTE, SHORT, INT, FLOAT, STRING };
  enum encodings  { RAW, TEXT, BITS };

  struct DataStruct {
  std::string dataName;
  int dataId;
  int encodedLength;
  dataTypes dataType;
  encodings encoding;
} dataStruct;
  int intValue;
  float  floatValue;
  std::string stringValue;
};
