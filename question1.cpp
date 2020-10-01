/*
***************************************************
A C++ program to print your fullname, age 
Department, stduent number and cell number 

BY: Faremi Saheed
Student ID: 202003491
Lecturer: Dr Fashoto
Question: 1
***************************************************
*/

//Library functions 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Declaring variables
    string fullname;
    int age;
    string department; 
    int studentid;
    int cellnumber;

    //Assigning parameters to the declared varaible
    fullname = "Faremi Saheed";
    age = 18;
    department = "B.sc Information Tech";
    studentid = 202003491;
    cellnumber = 76675550;

    //Printing the values

    cout << "Full Name: " << fullname <<endl;
    cout << "Age: " << age <<endl;
    cout << "Department Name: "<<department <<endl;
    cout << "Student Number: "<< studentid <<endl;
    cout << "Cell Number: " << cellnumber <<endl;

    return 0;
}
