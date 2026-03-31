#include "../inc/addData.hpp"
#include <iostream>


addData::addData()
{
}

addData::addData(int iData, int iId, int iRoll, const std::string& strName)
{
    data = iData; 
    id = iId;
    rollNumber = iRoll;
    name = strName; 
}

void addData::display() 
{
    std::cout << "Data: " << data
              << "\nID: " << id
              << "\nRoll Number: " << rollNumber
              << "\nName: " << name << std::endl;
}
