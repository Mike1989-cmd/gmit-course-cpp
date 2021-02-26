#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED



#endif // PLAYER_H_INCLUDED
using namespace std;


class Player{

private:
    string forename;
    string surname;
    string position;
    int mobilenumber;

public:

    void printPlayerInfo(){
    }

    Player(string forename, string surname, string position){
    this->forename = forename;
    this->surname=surname;
    this->position=position;
    }

    Player(int mobilenumber){
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

    int getmobilenumber(){
    return mobilenumber;
    }

    void setmobilenumber(int mobilenumber){
    }
};
