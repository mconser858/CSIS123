// Chapter 5 Assignment 5.6.cpp 
// Program to determine if a number is prime

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    int divisor;

    cout << "Enter a positive integer and I will tell you if it's prime!\n"; // Prompts user input
    cin >> num; // Stores user input
    cout << endl;
    while ((!cin) || (num <= 0)) // Validates user input
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input. Enter a positive integer and I will tell you if it's prime!\n";
        cin >> num;
    }
    if ((num % 2 == 0) && (num != 2) || (num == 1)) // Looks for 1 and non-prime even numbers
    {
        cout << num << " is not prime!\n";
        return 0; // QUERY RESOLVED --- PROGRAM TERMINATES
    }
    else 
    {
        divisor = sqrt(num); // Establishes divisor as (truncated) square root of input
    }
    
    if (divisor % 2 == 0) // Checks if divisor is even... 
    {
        divisor--;        // ...If divisor was even, it is made odd
    }
    
    while (divisor > 1) // Loop to check input against a descending series of divisors
    {
        if (num % divisor == 0) // Checks number by divisor
        {
            cout << num << " is not prime!\n";
            return 0; // QUERY RESOLVED --- PROGRAM TERMINATES
        }
        else
        {
            divisor -= 2; // Reduces divisor to next lowest odd number
        }
    }
    cout << num << " is prime!\n"; 

    return 0;
}