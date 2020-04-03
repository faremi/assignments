/*
***************************************************
 Write a C++ program to compute the perimeter and area 
 of a rectangle with a height of 15.2 inches and width 
 of 4.25 inches (Note that the inches should be 
 converted to cm in your

BY: Faremi Saheed
Student ID: 202003491
Lecturer: Dr Fashoto
Question: 2
***************************************************
*/


//library function
#include <iostream>
using namespace std;

int main()
{
    //declaring varibales
    double perimeter;
    double area;
    double height;
    double width; 

    //Initializing and coverting height and width to cm 
    height = 15.2; //inches
    width = 4.25;   //inches

    // converting to cm 
    height = height * 2.54; //cm = inch * 2.54
    width = width * 2.54;   //cm = inch * 2.54

    //calculating the perimeter
    perimeter = 2*(height + width); // perimeter = 2( a + b)

    //calculating the area
    area = height * width; // area = a * b

    cout << "Height in cm: " << height << endl;
    cout << "Width in cm: " << width << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area <<endl;
    return 0;
}