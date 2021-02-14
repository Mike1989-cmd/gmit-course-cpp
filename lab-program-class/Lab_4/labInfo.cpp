#include <iostream>
#include <iomanip>
#include <string>
#include "labInfo.h"


using namespace std;



class labInfo{


private:

void setdate(int day,int month,int year){
    cout << setw(10) << "Date:" << setw(2)<<setfill('0')<<day<<":"<<setw(2)<<setfill('0')<<month<<":"<<setw(4)<<year<<endl;

}
public:
    string name;
    string labId;
    int dayTemp;
    int monthTemp;
    int yearTemp;



    //Function printInfo

void printInfo(){



    cout << setw(9)<<name<<"\n\n";
    cout << setw(10)<<labId<<"\n\n";


}


void setdate1(int dayTemp,int monthTemp,int yearTemp){


    cout << setw(10) << "Date:" << setw(2)<<setfill('0')<<dayTemp<<":"<<setw(2)<<setfill('0')<<monthTemp<<":"<<setw(4)<<yearTemp<<endl;
}

};


int main()
{
    LabInfo();

   labInfo Mike;
    Mike.name = "Mike";
    Mike.labId = "Lab 4";


    Mike.printInfo();
    Mike.setdate(12,02,2021);
    Mike.setdate1(12,02,2021);


}
