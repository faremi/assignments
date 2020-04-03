/*
***************************************************
Write a C++ program to convert 800days into years and weeks

BY: Faremi Saheed
Student ID: 202003491
Lecturer: Dr Fashoto
Question: 3
***************************************************
*/

//library functions
#include <iostream>
using namespace std;

int main()
{
    //declaring varibales
    int days;
    int weeks; 
    int years;  

    //initializing the day
    days = 800;

    //converting to weeks
    weeks = days/ 7; //7 days make a week
    
    //converting to years
    years = days/ 365; //365 days make a year

    cout << "There are " << weeks << " weeks in " 
    << days << " days." <<endl;
    cout << "There are " << years << " years in " 
    << days << " days." <<endl;


    return 0;
}
