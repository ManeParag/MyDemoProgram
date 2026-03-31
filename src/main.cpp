#include <iostream>
#include <string>
#include "../inc/addData.hpp"

using namespace std;



int main()
{
    int operation, iData, iId, iInputRollNumber;
    std::string strName;

    std::cout << "Start main" << std::endl;
    //std::cout << "Enter student details: " << std::endl;
    
    addData objAddData;
    while(1)
    {
        /* if(count < 3)
        {
            std::cin >> iData >> iId >> iInputRollNumber >> strName;

            addData objAddData(iData, iId, iInputRollNumber, strName);
            objAddData.display();
            count++;
        }
        else
            break; */ 

        cout << "1 : Add data" << endl;
        cout << "2 : display data" << endl;
        cout << "3 : remove Student data" << endl;
        cout << "4 : Edit  Student name " << endl;
        cout << "5 :  Exit " << endl;

        cin >>operation;
        
        switch(operation)
        {
            case 1 :
                    cout << "Please add data " << endl;
                    std::cin >> iData >> iId >> iInputRollNumber >> strName;

                    objAddData = addData(iData, iId, iInputRollNumber, strName);
                    //objAddData.display();
                    break;
            case 2 : objAddData.display();
                     break;
            case 3 :
                     break;
            case 4 :
                     break;
            case 5 : exit(0);
                     break;
            default :
                cout << "invalid opetion" <<endl ;
        }
    } 
}