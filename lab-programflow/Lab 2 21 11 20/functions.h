//This file contains all the functions/code that is called up in tne main program

//Task 1 - Lab Info
 void LabInfo(){
    cout << "Task 1\n\n";
    cout << "Michael O'Connor\n";
    cout << "Lab #2" << endl;

    //the system ("Pause"), pauses the execution of the code, and will not continue witout the user pressing a key
    system ("pause");
}
//Task 2 - Output the largest of 2 numbers
 int Greaterthan(int x, int y){
        cout << "Task 2\n\n";
        if (x > y){
            cout << "\n\nThe Largest value is " << x << endl;
        }else{
            cout << "\n\nThe largest number is " << y << endl;
            system ("pause");
        }
        return 0;
}
//Task 3 - Check number enetered is between 1 & 100
 void numbercheck(){
        float a =0;
        cout << "\n\n\nEnter number between 1 & 100: ";
        cin >> a;
        if (a > 100){
        cout << "\nThe number you enetred is out of range\n\n\n";
        }else if (a < 1){
            cout << "\nThe number you enetred is out of range\n\n\n";
        }else {
            cout << "\nThe number is within range\n\n\n";
        }
        system ("pause");
}
//Task 4 - Multiple choice question
 char Answer(){
    char Answer = 0;

    cout << "\n\nWhat is 2+2? Select either A, B or C,\n A: 3\n B: 4\n C: 6\n\n";
    cout << "Enter your choice A,B or C: ";
    cin >> Answer;
    switch (Answer){
    case 'A':
        cout << "\nThat is the wrong answer, the answer is B:4";
        break;
    case 'B':
        cout << "\nThat is the correct answer";
        break;
    case 'C':
        cout << "\nThat is the wrong answer, the answer is B:4";
        break;
    default:
        cout<< "\nInvalid Answer";
        break;
    }
    cout << "\n\n\n";
    system ("pause");
    return 0;
 }
//Task 5 - Calculate Area of circle from users inputted radius
 float AreaOfCircle(){
     float PI = 3.14159;
     float radius = 0;
     float AreaOfCircle = 0;

     cout<< "\n\n\nWhat is the radius of the circle in meters? ";
     cin >> radius;

     AreaOfCircle = PI * radius * radius;
     cout<< "\nThe Area of the circle is: " << AreaOfCircle << "m\n\n";

     system ("pause");
     return 0;
 }
//Task 6 - Calaculate Area of rectangle based on inputted Length and Width
 float AreaOfRectangle(){
     float L = 0;
     float W = 0;
     float Rect_Area = 0;

     cout << "\n\nEnter Length of Rectangle in meters: ";
     cin >> L;

     cout << "\n\nEnter Width of Rectangle in meters: ";
     cin >> W;

     Rect_Area = L * W;
     cout << "\n\nArea of Rectangle = " << Rect_Area << "m2\n\n";

    system ("pause");
    return 0;

 }
//Task 7 - Alarm if teperature is >=95C and/or if humidity is >=90%
 float Alarm(){
        float temp = 0;
        float humidity = 0;

        cout << "\n\nWhat is the temperature in degrees celcius?  ";
        cin >> temp;

        cout << "\n\nWhat is the humidity?  ";
        cin >> humidity;

        if (temp >= 95 || humidity >= 90){
            cout << "\n\nWARNING - System not ready - #Temp or Humididty is too high\n\n";
        } else {
        cout << "\n\nSystem is ready!\n\n";
        }
            cout << endl;
           system ("pause");
           return 0;
         }
//Task 8 - Calacualte Area of circle for radius of 0m to 120m
double IncrementRadius(){
     float PI = 3.14159;
     double AreaOfCircle = 0;

     for (int radius = 0; radius <= 120; radius++ ){

     AreaOfCircle = PI * radius * radius;

     cout<< "\nThe Area of the circle when the radius is " << radius << "m = " << AreaOfCircle << "m2";

     }
     cout << "\n\n";
     system ("pause");
     return 0;
 }
//Task 9 - Convert Celcius to Fahrenheit
float temp_conversion(){
    float celsius;
    float fahrenheit;
    int choice = 0;

    cout << "\n\n\nType '1' to convert from Celsius to Fahrenheit\n\nType '2' to convert from Fahrenheit to Celcius\n\n";
    cout << "\nType your choice 1 or 2: ";
    cin >> choice;

    switch (choice){

    case 1:
    cout << "\nInsert temp in degrees Celsius: ";
    cin >> celsius;
    fahrenheit = ((celsius * 9/5) + 32);
    cout << celsius << " degrees Celsius = " << fahrenheit << " degrees Fahrenheit";
    break;

    case 2:
    cout << "\nInsert temp in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = ((fahrenheit - 32) * 5/9);
    cout << fahrenheit << " degrees Fahrenheit  = " << celsius << " degrees Celsius";
    break;

    }
    cout << "\n\n";
    system ("pause");
    return 0;
}
//Task 10 - Print even numbers from 0 to 1000
void PrintEven(){
    int n = 0;
    for (n = 0; n <= 1000; n++){
      if (n%2 == 0){
        cout  << n << ", ";
      }

    }
    cout << "\n\n";
    system ("pause");
}
//Task 11 - Print odd numbers between the 2 user defined integers
void PrintOdd(){
    int a = 0;
    int z = 0;

    cout << "\n\nEnter 1st number: ";
    cin >> a;
    cout << "\nEnter 2nd number: ";
    cin >> z;

    for (int i = a; i<= z; i++){
        if (i%2 == 1){
            cout << i<< ", ";
        }
    }
    cout << "\n\n";
    system ("pause");
    cout << "\n\n";
}
//Task 12 - Find odd numbers in array
float OddArray(){

//for this question the user has the power to insert the number of numbers which the array can hold and also inputs each value, with max 100 numbers
    int arr[100],i,num;

    cout<< "Enter the size of array you want\n";

    cin>> num;

    cout<< "Enter the elements of the array\n";

    for(i=0; i<num; i++){
            cin >> arr[i];
            }
    cout << "\nOdd numbers of the array are \n";
        for (i=0; i<=num; i++){
            if (arr[i]%2==1){
                cout << arr[i] << ", ";
            }

        }
    cout << "\n\n";
    system ("pause");
    cout << "\n\n";
    return 0;
    }
//Task 13 - Function to create 6 random numbers
int out_random_numbers(){

   int v1 = rand() % 100; //outputs random numbers from 0 to 99
   int v2 = rand() % 100 +1; // outputs random numbers from 1 to 100
   int v3 = rand() % 30 + 1985; // outputs random value from 1985 to 2014
   int v4 = rand() % 2 + 3;
   int v5 = rand() % 10 +600;
   int v6 = rand() % 150 + 20000;

   cout << v1 << endl;
   cout << v2 << endl;
   cout << v3 << endl;
   cout << v4 << endl;
   cout << v5 << endl;
   cout << v6 << endl;


    cout << "\n\n";
    system ("pause");
    return 0;

}
//Task 14 - Fix Code
float Task14(){

/* Print the numbers 5 through 9: */
cout << "\n\nList of numbers from 5 to 9:\n\n";
int i=5;
while (i < 10)
{
cout << i;
cout << endl;
i = i + 1;
}

cout << "\n\n";
/* Finding the sum 1 + 2 + 3 + ... + 20 */
i = 1;
int sum = 0;
while (i <= 20)
{
sum = sum + i;
i = i + 1;
}
cout << "\n\nThe sum = " << sum << "\n\n";

/* Average a list of grades terminated by -1 */
sum = 0;
int count = 0;
int grade = 0;
cout << "\n\nEnter grade (-1 to end): "; // prompt user for grade
cin >> grade; // read grade
do
{
sum = sum + grade;
count = count + 1;
/* Get next grade */
cout << "\nEnter grade (-1 to end): ";
cin >> grade;
cout << count;
}
while (grade != -1);{

}
if (count > 0)
cout << "\n\nAverage is " << (double) sum / count << "\n\n";

    cout << "\n\n";
    system("pause");
return 0;

}
//Task 15 - Print finish 3 times  using  for, while and do loop
void Loops(){
    int x = 0;
    cout << "Print 'finished' 10 times using 'for' loop;\n\n";
    for (x = 0; x<=10; x++){
        cout << "finished\n";
      }
    int y = 0;
    cout << "\n\nPrint 'finished' 10 times using 'while' loop;\n\n";
    while (y<=10){
        cout << "finished\n";
        y++;
    }
    int z = 0;
    cout << "\n\nPrint 'finished' 10 times using 'do-while' loop;\n\n";

    do {
    cout << "finished\n";
    z++;
    }while (z<=10);

}
