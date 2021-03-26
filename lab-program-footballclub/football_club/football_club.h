#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDE


#include <iostream>

using namespace std;
#include "player.h"

class FootballClub{

private:
    string clubname;
    string district;
    string stripColour;

    //const int playersquad = 40;
    player Squad[40];
    player Team[15];

public:

   FootballClub();
   FootballClub(string clubname/*, string district, string stripColour*/){
    this->clubname=clubname;
    this->district=district;
    this->stripColour=stripColour;
    }

    /*FootballClub(string district){
    this->district=district;

    }*/

    void printInfo(){}

   string getclubname(){
   return clubname;
   }
      void setclubname(string clubname){

    }
   string getdistrict(){
   return district;
   }
       void setgetdistrict(string district){

    }
   string getstripColour(){
   return stripColour;
   }

    void setstripColour(string stripColour){

    }

    void addtosquad(player tmpPlayer,int position){
    this->Squad[position].setName(tmpPlayer.getforename(),tmpPlayer.getsurname());
    }

    void addtoteam(player tmpPlayer,int reserve){
    this->Team[reserve].setName(tmpPlayer.getforename(),tmpPlayer.getsurname());
    }

    void printTeam();
    void printSquad();

};
#endif // FOOTBALL_CLUB_H_INCLUDED
