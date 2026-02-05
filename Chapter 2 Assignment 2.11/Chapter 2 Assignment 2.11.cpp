// Program to Determine a Vehicle's Fuel Range

// Note: To help foster a "yeehaw" user experience, this program will round any result yielding a decimal to the nearest integer.

#include <iostream>
#include <cmath>

using namespace std;

const double CONVERSION = 1.609344; // Formula to convert miles to km

int main()
{
    double capacity, mpg, range;
    cout << "How many gallons of go-juice can your car hold? ";
    cin >> capacity;
    cout << "\nHow many miles you gettin' off a gallon? ";
    cin >> mpg;
    range = capacity * mpg;
    cout << "\nSweet! Sounds like a full tank'll cover around "
        << static_cast<int>(round(range))
        << " miles! Or " << static_cast<int>(round(range * CONVERSION))
        << " kilometers, for our international friends!" << endl;

    return 0;
}