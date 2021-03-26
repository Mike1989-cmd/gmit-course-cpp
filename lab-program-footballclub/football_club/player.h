#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED



#include <iostream>




using namespace std;


class player{

private:
    string forename;
    string surname;
    string position;
    int mobilenumber;

public:




    void printPlayerInfo(){
    }

    player(string forename, string surname, string position){
    this->forename = forename;
    this->surname=surname;
    this->position=position;
    }

    player(int mobilenumber){
    this->mobilenumber=mobilenumber;

    }

    void printInfo(){}

   string getforename(){
   return forename;
   }
      void setforename(string forename){

    }
   string getsurname(){
   return surname;
   }
       void setsurname(string surname){

    }
   string getposition(){
   return position;
   }

    void setposition(string position){

    }
    void setName(string forename,string surname);

    int getmobilenumber(){
    return mobilenumber;
    }

    void setmobilenumber(int mobilenumber){
    }
};
#endif // PLAYER_H_INCLUDED
