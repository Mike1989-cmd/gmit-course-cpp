#include <iostream>
#include "football_club.h"
#include "player.h"
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;



int main()
{

    FootballClub Mike1(/*"Killannin","Galway","Blue"*/);
    FootballClub Mike2("Galway Ireland");
    FootballClub addtoteam();

     cout << "Club is " << Mike1.getclubname() << " located in " << Mike2.getdistrict()<< ", and the strip colour is " << Mike1.getstripColour()  << endl;



    player Mike3("Mike","O'Connor","Full Forward");
    player Mike4(871234567);


     cout << "1st name is  " << Mike3.getforename() << " surname is " << Mike3.getsurname()<< ", position is  " << Mike3.getposition() << "Mobile number is " << setw(10)<< setfill('0') << Mike4.getmobilenumber()<< endl;

    player playertmp;
    fstream infile;
    infile.open("squad.csv", ios::in);
    string firstName,secondName;
    string line;
    int i = 0;
    while(std::getline(infile,line)){
        std::istringstream strLine(line);

        if(!(strLine>>firstName>>secondName)){
            break;
        }
        else{

            cout << "Input ->"<<firstName<<" "<<secondName<<endl;
            playertmp.setName(firstName,secondName);

        }
        i = i +1;
    }
    infile.close();

    infile.open("team.csv",ios::in);
    i = 0;

    while (std::getline(infile,line)){
        std::istringstream strLine(line);

        if(!(strLine>>firstName>>secondName)){
            break;
        }

        else{
            playertmp.setName(firstName,secondName);
        }
    }
   cout << "<<--------------->>"<<endl;
   cout << "SQUAD"<<endl;
   addtoteam.printSquad();
   cout << "TEAM" << endl;
   club.printTeam();
}


