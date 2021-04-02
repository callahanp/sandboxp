#include <iostream>
#include <string>
#include <Data.hxx>

int Data::nextDataId=0;

Data::Data (const char* dataName) {
    Data::dataStruct.dataId = ++nextDataId;
    Data::dataStruct.dataName = dataName;
    LOG4CXX_INFO(logger, "Data Constructor")
    LOG4CXX_INFO(logger, "Data id: " << Data::dataStruct.dataId);

  }
  Data::Data (const char* dataName, int& intReference) {
      Data::dataStruct.dataId = ++nextDataId;
      Data::dataStruct.dataName = dataName;
      Data::intValue = intReference;
      Data::dataStruct.dataType = INT;
      Data::dataStruct.encoding = RAW;
      LOG4CXX_INFO(logger, "Data Constructor")
      if (Data::dataStruct.dataType == INT){
        LOG4CXX_INFO(logger,"Data Value = " << Data::intValue);
      }
      LOG4CXX_INFO(logger,"Data id: " << Data::dataStruct.dataId);

    }
    Data::Data (const char* dataName, float& floatReference) {
        Data::dataStruct.dataId = ++nextDataId;
        Data::dataStruct.dataName = dataName;
        Data::floatValue = floatReference;
        Data::dataStruct.dataType = FLOAT;
        Data::dataStruct.encoding = RAW;
        LOG4CXX_INFO(logger, "Data Constructor")
        if (Data::dataStruct.dataType == FLOAT){
          LOG4CXX_INFO(logger,"Data Value = " << Data::floatValue);
        }
        LOG4CXX_INFO(logger,"Data id: " << Data::dataStruct.dataId);

      }
      Data::Data (const char* dataName, std::string& stringReference) {
          Data::dataStruct.dataId = ++nextDataId;
          Data::dataStruct.dataName = dataName;
          Data::stringValue = stringReference;
          Data::dataStruct.dataType = STRING;
          Data::dataStruct.encoding = RAW;
          LOG4CXX_INFO(logger, "Data Constructor")
          if (Data::dataStruct.dataType == STRING){
            LOG4CXX_INFO(logger,"Data Value = " << Data::stringValue);
          }
          LOG4CXX_INFO(logger,"Data id: " << Data::dataStruct.dataId);
        }
std::string Data::get_data_name(){
    return Data::dataStruct.dataName;
  }
