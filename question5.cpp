/*
***************************************************
Write a C++ program to convert a given time in minutes to hours and seconds

BY: Faremi Saheed
Student ID: 202003491
Lecturer: Dr Fashoto
Question: 5
***************************************************
*/

//Library functions
#include <iostream>
using namespace std;

int main()
{
    //declaring vairables
    int minutes;
    int hours;
    int seconds;

    //Initializing
    cout << "Enter the value of your minute" <<endl;
    cin >> minutes;

    //hours 
    hours = minutes/ 60; //60 minutes make 1 hour
    seconds = minutes * 60; // 60 seconds make 1 miutes

    cout <<minutes <<" minutes makes "<< hours << " hour(s)." <<endl;
    cout <<minutes << " minutes makes "<< seconds << " seconds."<<endl;
    return 0;
}