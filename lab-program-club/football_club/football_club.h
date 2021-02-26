#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDE

#endif // FOOTBALL_CLUB_H_INCLUDED
using namespace std;

class FootballClub{

private:
    string clubname;
    string district;
    string stripColour;

public:

    FootballClub(string clubname, string district, string stripColour){
    this->clubname=clubname;
    this->district=district;
    this->stripColour=stripColour;
    }

    FootballClub(string district){
    this->district=district;

    }

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

};
