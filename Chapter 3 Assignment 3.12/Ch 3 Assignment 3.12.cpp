// Ch 3 Assignment 3.12.cpp
// Program to determine the shortest distance between two cars traveling perpendicular to each other
// at speeds and for a length of time determined by the user.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double speedA, speedB;
    double hours, minutes, totalHours;
    double distanceA, distanceB, shortestDistance;

    cout << "When using this program, please enter only numerical characters. Separate entries may be separated by a space.\n";
    cout << "Enter the average speeds (mph) for Car A and for Car B.\n";
    cin >> speedA >> speedB;
    cout << "For how many hours and minutes have these cars been driving?\n";
    cin >> hours >> minutes;
    totalHours = hours + minutes / 60;
    distanceA = speedA * totalHours;
    distanceB = speedB * totalHours;
    shortestDistance = sqrt(pow(distanceA, 2) + pow(distanceB, 2));
    cout << "The shortest distance between Car A and Car B is " << shortestDistance << " miles.\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
