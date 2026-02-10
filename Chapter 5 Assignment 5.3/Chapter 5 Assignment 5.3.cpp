//*********************************************************************************************//
// Chapter 5 Assignment 5.3.cpp                                                                //
// Program: Telephone Digits                                                                   //
// This program converts upper- and lowercase letters to their corresponding telephone digits  //
//*********************************************************************************************//

#include <iostream>

using namespace std;

int main()
{
	char letter;
	int digit, num;

	cout << "Program to convert letters to their corresponding telephone digits.\n";
	cout << "To stop the program, enter #.\n";

	cout << "Enter a letter: "; // Prompts user input
	cin >> letter;				// Stores user input
	cout << endl;

	while (letter != '#') // Establishes '#' as a sentinel value
	{
		cout << "Letter: " << letter; // Echoes input
		cout << ", Corresponding telephone digit: ";

		if (static_cast<int>(letter) > 96 && static_cast<int>(letter) < 123) // Catches lowercase letters
			(letter) -= 32; // Converts lowercase to uppercase

		num = static_cast<int>(letter) - static_cast<int>('A'); // Converts letters to an integer between 0 and 25

		if (0 <= num && num < 26) // Checks for valid input before processing
		{
			digit = (num / 3) + 2;

			if (((num / 3 == 6) || (num / 3 == 7)) && (num % 3 == 0))
				digit -= 1;

			if (digit > 9)
				digit = 9;

			cout << digit << endl;
		}
		else
			cout << "Invalid input.\n";

		cout << "\nEnter another letter to find its corresponding telephone digit.\n";
		cout << "To stop the program, enter #.\n";
		cout << "Enter a letter: ";
		cin >> letter;
		cout << endl;
	} // End loop
	cout << "Program ended.\nGoodbye!\n";

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu