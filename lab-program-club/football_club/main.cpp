#include <iostream>
#include "football_club.h"
#include <iomanip>
#include "player.h"

using namespace std;



int main()
{

    FootballClub Mike1("Killannin","Galway","Blue");
    FootballClub Mike2("Galway Ireland");

     cout << "Club is " << Mike1.getclubname() << " located in " << Mike2.getdistrict()<< ", and the strip colour is " << Mike1.getstripColour()  << endl;



    Player Mike3("Mike","O'Connor","Full Forward");
    Player Mike4(871234567);

     cout << "1st name is  " << Mike3.getforename() << " surname is " << Mike3.getsurname()<< ", position is  " << Mike3.getposition() << "Mobile number is " << setw(10)<< setfill('0') << Mike4.getmobilenumber()<< endl;


}

