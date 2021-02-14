

using namespace std;

class labInfo{


private:

    int day;
    int month;
    int year;

public:
    string name;
    string labId;
    int dayTemp;
    int monthTemp;
    int yearTemp;



    //Function printInfo

void printInfo(){


    //cout << "input the date dd mm yyyy:";
    //cin >> day>>month>>year;
    cout << setw(9)<<name<<"\n\n";
    cout << setw(10)<<labId<<"\n\n";
    //cout <<"Date:"<<day<<":"<<month<<":"<<year<<endl;
   //cout << setdate;

}
void setdate(int dayTemp,int monthTemp,int yearTemp){


    cout << setw(10) << "Date:" << setw(2)<<setfill('0')<<dayTemp<<":"<<setw(2)<<setfill('0')<<monthTemp<<":"<<setw(4)<<yearTemp<<endl;
}

};

