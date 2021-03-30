#include <iostream>
#include <string>
#include <Data.hxx>

int Data::nextDataId=0;

Data::Data (const char* dataName) {
    Data::dataStruct.dataId = ++nextDataId;
    Data::dataStruct.dataName = dataName;
    std::cout << "Created Data: " << Data::dataStruct.dataName <<std::endl;
    std::cout << "Data id: " << Data::dataStruct.dataId << std::endl;

  }
  Data::Data (const char* dataName, int& intReference) {
      Data::dataStruct.dataId = ++nextDataId;
      Data::dataStruct.dataName = dataName;
      Data::intValue = intReference;
      Data::dataStruct.dataType = INT;
      Data::dataStruct.encoding = RAW;
      std::cout << "Created Data: " << Data::dataStruct.dataName;
      if (Data::dataStruct.dataType == INT){
        std::cout << " = " << Data::intValue << std::endl;
      }      std::cout << "Data id: " << Data::dataStruct.dataId << std::endl;
    }
    Data::Data (const char* dataName, float& floatReference) {
        Data::dataStruct.dataId = ++nextDataId;
        Data::dataStruct.dataName = dataName;
        Data::floatValue = floatReference;
        Data::dataStruct.dataType = FLOAT;
        Data::dataStruct.encoding = RAW;
        std::cout << "Created Data: " << Data::dataStruct.dataName;
        if (Data::dataStruct.dataType == INT){
          std::cout << " = " << Data::floatValue << std::endl;
        }
        std::cout << "Data id: " << Data::dataStruct.dataId << std::endl;
      }
      Data::Data (const char* dataName, std::string& stringReference) {
          Data::dataStruct.dataId = ++nextDataId;
          Data::dataStruct.dataName = dataName;
          Data::stringValue = stringReference;
          Data::dataStruct.dataType = STRING;
          Data::dataStruct.encoding = RAW;
          std::cout << "Created Data: " << Data::dataStruct.dataName;
          if (Data::dataStruct.dataType == STRING){
            std::cout << " = " << Data::stringValue << std::endl;
          }
          std::cout << "Data id: " << Data::dataStruct.dataId << std::endl;
        }
std::string Data::get_data_name(){
    return Data::dataStruct.dataName;
  }
