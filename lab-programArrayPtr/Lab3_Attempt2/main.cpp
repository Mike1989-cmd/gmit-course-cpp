#include <iostream>
#include "functions.h"
using namespace std;
using namespace Mikesprint;

int main()
{//Task 1 - Lab Info

  labinfo();



//Task 2 & 3 - Take in 6 numbers between 0 and 100, using a loop and the array of numbers, and their memory location passed by value

    const int ARRAYSIZE = 6;
    int x[ARRAYSIZE];

    int index=0;
    cout<<"\n\n/*************/\n\n"<<endl;
    cout<<"Task 2 - Take in 6 numbers and pass by value\n\n";
    cout<<"/* Enter 6 numbers /"<<endl;
    while(index<ARRAYSIZE){

        int temp;
        cin>>temp;
        if((temp>0)&&(temp<100)){
            x[index]=temp;
            index++;
        }

        else{
            cout<<"You have enter wrong value" <<temp<<"<0 or >100 at index"<<index<<endl;
        }
    }

    for(int i=0;i<ARRAYSIZE;++i){


    passByValue(x[i]);
    cout<< "Array Indice = "<< i << ", The number assigned to this indice is = " << x[i] << ", The Memory Location =" <<&x[i]<<endl;
    cout<< "\n";

    }
system ("pause");

//Task 4 - Input 1 number called scalar

   int  scalar;
   cout<<"\n\n/*************/\n\n"<<endl;
   cout<<"Task 4\n\n";
    cout << "Insert Scalar Value: ";
    cin >> scalar;

system ("pause");

//Task 5 - Pass array and scalar by reference and multiply them together.

    int y[ARRAYSIZE];
    int i = 0;

    cout<<"\n\n\n\n"<<endl;
    cout<<"\n\n/*************/\n\n"<<endl;
    cout<<"Task 5\n\n"<<endl;

    Mike(&x[i]);
    Mike(&y[i]);
    Mike(&scalar);


    for(int i=0;i<ARRAYSIZE;++i){
            y[i] = x[i] * scalar;
    cout << x[i] << "x" << scalar << "= " << y[i] << " - Memory Location = "<< &y[i]  <<"\n\n";
    }

 system ("pause");

 //Task 6 - Pass array and scalar by reference and multiply them together.

//(This will give the exact same result as Task 5 beacause it is referencing its values,
//however if this was done 1st it wouldnt neccesarly give the same values,
//for example if the scalar was set to 0 where it is declared in the functions,
//and the pass by reference was done 1st then the pass by value would set the scalar to 0,
//but if the pass by value was 1st it would take the Cin value and use t,
//but the pass by reference after would not use the cin value.)

    cout<<"\n\n\n\n"<<endl;
    cout<<"\n\n/*************/\n\n"<<endl;
    cout<<"Task 6\n\n"<<endl;

    Mike(x[i]);
    Mike(y[i]);
    Mike(scalar);


    for(int i=0;i<ARRAYSIZE;++i){
            y[i] = x[i] * scalar;
    cout << x[i] << "x" << scalar << "= " << y[i] << " - Memory Location = "<< &y[i]  <<"\n\n";
    }

 system ("pause");

 //Task 7

    cout<<"\n\n\n\n"<<endl;
    cout<<"\n\n/*************/\n\n"<<endl;
    cout<<"Task 7\n\n"<<endl;

    char tree[7][9] = {{'x','x','x','x',1,'x','x','x','x'},{'x','x','x','x','x','x','x','x','x'},{'x','x','x','o','x','x','x','x','x'},{'x','x','0','x','x','o','x','x','x'},{'x','x','x','x','x','x','x','x','x'},{'x','x','x','x','+','x','x','x','x'},{'x','x','x','x','+','x','x','x','x'}};


    cout<<"         "<<tree[0][4]<<"\n";
    cout<<"         "<<tree[1][4]<<"\n";
    cout<<"        "<<tree[1][3]<<tree[1][4]<<tree[1][5]<<"\n";
    cout<<"       "<<tree[2][2]<<tree[2][3]<<tree[2][4]<<tree[2][5]<<tree[2][6]<<"\n";
    cout<<"      "<<tree[3][1]<<tree[3][2]<<tree[3][3]<<tree[3][4]<<tree[3][5]<<tree[3][6]<<tree[3][7]<<"\n";
    cout<<"     "<<tree[4][0]<<tree[4][1]<<tree[4][2]<<tree[4][3]<<tree[4][4]<<tree[4][5]<<tree[4][6]<<tree[4][7]<<tree[4][8]<<"\n";
    cout<<"         "<<tree[5][4]<<"\n";
    cout<<"         "<<tree[6][4]<<"\n";

    return 0;
}



