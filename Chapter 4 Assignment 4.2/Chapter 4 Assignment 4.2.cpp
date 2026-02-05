// Chapter 4 Assignment 4.2
// Program to sort 3 numbers in ascending order

#include <iostream>

using namespace std;

int main()
{
	int x, y, z; // defines variables for user input
	int temp; // defines temporary variable

	cout << "Please enter 3 integers to be sorted in ascending order. ";
	cin >> x >> y >> z; // stores user input as x, y, and z
	if (cin) // verifies that input was successfully processed
		cout << "You entered " << x << ", " << y << ", and " << z << "." << endl; // confirms input to user
	else
	{
		cout << "Input failed. Program terminated." << endl;
		return 1; // terminates program in the event of input failure
	}
	if (y <= x) // checks x against y, swaps positions if x is greater
	{
		temp = x;
		x = y;
		y = temp;
	}
	if (z <= y) // checks y against z, swaps positions if y is greater
	{
		temp = y;
		y = z;
		z = temp;
	}
	if (y <= x) // checks x against y, swaps positions if x is greater
	{
		temp = x;
		x = y;
		y = temp;
	}
	cout << "In ascending order, the numbers are: " << x << ", " << y << ", " << z << "." << endl; // prints numbers in ascending order

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
