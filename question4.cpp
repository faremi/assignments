/*
***************************************************
 Write a C++ program to calculate the Euclidean distance and manhattan distance between
the two points.

BY: Faremi Saheed
Student ID: 202003491
Lecturer: Dr Fashoto
Question: 4
***************************************************
*/

//Library functions
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Declaring vairables
    double euclidean_distance;
    double manhattan_distance;
    double x1,x2;
    double y1,y2;

    //initializing the points
    cout << "Enter the value of x1 (1st cordinate of point 1)"<<endl;
    cin >> x1;
    cout << "Enter the value of y1 (2st cordinate of point 1)"<<endl;
    cin >> y1;
    cout << "Enter the value of x1 (1st cordinate of point 2)"<<endl;
    cin >> x2;
    cout << "Enter the value of x1 (2st cordinate of point 2)"<<endl;
    cin >> y2;

    //point 1 (x1,y1), point 2 (x2,y2)

    //Euclidean distance sqrt(pow((x1 - x2),2) + pow((y1 - y2),2))
    euclidean_distance = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));

    //manhattan distance abs(x1 - x2) + abs(y1 - y2)
    manhattan_distance = abs(x1 - x2) + abs(y1 - y2);

    cout << "The euclidean_distance between point ("
    <<x1 <<","<<y1<<") and point ("<<x2 <<","<<y2<< ") is "<<euclidean_distance<<endl;
    cout << "The manhattan_distance between point ("
    <<x1 <<","<<y1<<") and point ("<<x2 <<","<<y2<< ") is "<<manhattan_distance<<endl;
    return 0;
}