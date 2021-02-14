#include <iostream>
#include <iomanip>
#include "labInfo.h"


using namespace std;

int main()
{


    labInfo Mike;
    Mike.name = "Mike";
    Mike.labId = "Lab 4";

    Mike.printInfo();
    Mike.setdate(12,02,2021);


}
