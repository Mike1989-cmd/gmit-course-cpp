  #include "player.h"

    Player::Player(){
        this->forename = "";
        this->surname = "";
        this->position="";
        this->mobileNumber="";
        this->dob=0;
        this->onoff=0;
    }
    Player::Player(string forename, string surname){
        forename=forename;
        this->surname=surname;
    }


    Player::Player(string forename, string surname, int mobileNumber, string position){
        this->forename=forename;
        this->surname=surname;
        this->mobileNumber=mobileNumber;
        this->position=position;
        this->onoff=onoff;
    }

    void Player::printPlayerInfo(){

        cout<<"Name:"<<forename<<" "<<surname<<", DOB: "<<dob<<", position:"<<position<<", contact:"<<mobileNumber/*<<", on/off "<<onoff*/<<endl;
    }
    void Player::printTeamInfo(){
        if (onoff == 1){
        cout<<"Name:"<<forename<<" "<<surname<<", position:"<<position<<endl;
    }

    }

    string Player::getForename(){
        return forename;
    }
    string Player::getSurname(){
        return surname;
    }

    void Player::setMobileNumber(string mobileNumber){
        this->mobileNumber = mobileNumber;
    }
    string Player::getMobileNumber(){
        return this->mobileNumber;
    }
    void Player::setName(string name){
        this->forename=name;
    }
    void Player::setName(string forename,string surname){
        this->forename = forename;
        this->surname = surname;
    }
    void Player::setPosition(string position){
        this->position = position;
    }
    string Player::getPosition(){
        return this->position;
    }
    void Player::setDOB(int dob){
       this->dob=dob;
    }
    void Player::setONOFF(int onoff){
    this->onoff=onoff;
    }
    int Player::getDOB(){
        return dob;
    }
    int Player::getONOFF(){
        return onoff;
    }


