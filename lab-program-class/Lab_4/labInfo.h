#include <iostream>
#include <iomanip>
#include <string>



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






