// Program to Calculate the Average of 5 Test Scores

#include <iostream>

using namespace std;

int main()
{
    double test1, test2, test3, test4, test5, average; // Declares variables
    cout << "Provide 5 numerical test scores to receive their average.\n"; // Requests user input
    cin >> test1 >> test2 >> test3 >> test4 >> test5; // Stores user input
    average = (test1 + test2 + test3 + test4 + test5) / 5; // Calculates and stores average
    cout << "Average score is " << average << ".\n"; // Prints average

    return 0;
}