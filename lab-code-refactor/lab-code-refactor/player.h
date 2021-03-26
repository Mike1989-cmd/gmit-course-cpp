#include <iostream>

using namespace std;



class Player{
private:
    string forename;
    string surname;
    string position;
    string mobileNumber;
    int dob;
    int onoff;//on or off playing or sub

public:
    Player();
    Player(string forename, string surname);
    Player(string forename, string surname, int mobileNumber, string position);

    void printPlayerInfo();
    void printTeamInfo();
    string getForename();
    string getSurname();
    void setName(string name);
    void setName(string forename,string surname);

    void setPosition(string position);
    string getPosition();
    void setMobileNumber(string mobileNumber);
    string getMobileNumber();

    void setONOFF(int onoff);
    int getONOFF();


    void setDOB(int dob);
    int getDOB();


};

