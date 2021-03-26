#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#include "football_club.h"








int main()
{
    FootballClub club;
    club.printInfo();
    club.setClubname("Killannin");
    club.setDistrictname("Galway");
    club.setmanager("Mike O'Connor");

    string clubName = club.getClubname();
    clubName = club.getClubname();

    string Districtname = club.getDistrict();
    Districtname = club.getDistrict();

    string manager = club.getmanager();
    manager = club.getmanager();

   cout << clubName<< endl;
   cout << Districtname<< endl;
   cout << manager << endl;


    Player playerTemp;

    //READING DATA FROM A FILE
    fstream infile;
    infile.open("teamSquad.csv", ios::in);
    string firstName, secondName, dob, position, mobile, onoff;
    string line;
    int i = 0;
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile>>onoff)){
            break;
        }
        else{
            //cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            playerTemp.setONOFF(stoi(onoff));
            club.addPlayerToSquad(playerTemp, i);

        }
        //increments
        i =i+1;
    }
    infile.close();



    cout<<"<<---------------->>"<<endl;
    cout<<"SQUAD"<<endl;
    club.printSquad();
    cout<<"TEAM"<<endl;
    club.printTeam();




    return 0;
}
/*Quetion 4 I hadnt time to complete, but basically a pointer stores a memory address as its value
eg; string manager = "manager"
    string* ptr = &manager
    cout << ptr << endl;  This outputs the memory address of the manager with the pointer*/
