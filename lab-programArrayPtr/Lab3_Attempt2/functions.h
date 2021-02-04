#include <iostream>

using namespace std;

void labinfo(){

    cout<<"Task 1\n\n"<<endl;
    cout << "Michael O'Connor\n";
    cout << "lab #3" << endl;
    system ("pause");

}

    namespace Mikesprint{

    float passByValue (int x){
        //x = 10;
        //If the forward slashes were removed from in front of the x the previous line, scalar would be set to 10, however the user inputted value would be used.
        //Pass by value means the actual value is passed on no the location
        return 0;
    }


    float Mike (int *scalar){
        //*scalar = 0;
        //If the forward slashes are removed from the in front of *Scalar on the previous line, 10 would be set as the scalar value
        //Pass by reference calls the address of where the value is stored, so the value cant be cahnged but just referred to.
        return 0;
    }

    float Mike (int scalar){
        //scalar = 0;

    return 0;
    }

    }





