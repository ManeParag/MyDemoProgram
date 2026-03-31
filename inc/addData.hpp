#ifndef ADDDATA_HPP
#define ADDDATA_HPP

#include <string>

using namespace std;

class addData{
    int data;
    int id;
    int rollNumber;
    std::string name;

    public:
    addData(); 
    addData(int iData, int iId, int iRoll, const std::string& strName);
    void display();

};

#endif