// Program to Round Decimal Numbers

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    double x;
    cout << "Enter a number to be rounded to the nearest integer: ";
    cin >> x;
    cout << "That rounds to " << static_cast<int>(round(x)) << ".\n";

    return 0;
}