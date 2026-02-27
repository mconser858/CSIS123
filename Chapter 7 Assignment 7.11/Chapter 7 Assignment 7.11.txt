// Chapter 7 Assignment 7.11.cpp : Program to calculate the cumulative ASCII value of a user-inputted string

#include <iostream>
#include <string>

using namespace std;

void instructions(string& userString);
void calculateValue(string userString, int stringLength, int& totalValue);
void printResults(int totalValue, string& userString);
void farewell();

int main()

{
	string userString; // Variable to store user input
	int stringLength; // Variable to store length of current userString
	int totalValue; // Variable to act as the accumulator for ASCII values

	instructions(userString); // Prints instructions detailing the program; prompts and returns user input
	while (userString != "-999") // Confirms user wants to continue with program
	{
		stringLength = userString.length(); // Determines length of userString
		totalValue = 0; // Resets accumulator with each loop iteration
		calculateValue(userString, stringLength, totalValue); // Calculates cumulative ASCII value of characters in userString
		printResults(totalValue, userString); // Outputs result of calculations and prompts next input
	}
	farewell(); // Prints farewell message
	return 0;
}

void instructions(string& userString)
{
	cout << "Hello! I am a program designed to determine the cumulative ASCII value of the characters you enter!\n"
		<< "The character \'A\', for example, has an ASCII value of 65. If you were to enter \"AA\", I would tell you that\n"
		<< "the cumulative value of your entry is 130.\n"
		<< "Simply type in a word or series of words and press the \"Enter\" key on your keyboard.\n"
		<< "(To exit the program, enter -999)\n\nEntry: ";
	getline(cin, userString); // Stores user input
}

void calculateValue(string userString, int stringLength, int& totalValue)
{
	for (int i = 0; i <= stringLength; i++) // Iterates once for each character in the string
	{
		totalValue = totalValue + static_cast<int>(userString[i]); // Adds the value of character[i] to the value accumulator variable
	}
}

void printResults(int totalValue, string& userString)
{
	cout << "The cumulative ASCII value of the characters in the string \"" << userString << "\" is " << totalValue << ".\n\n";
	cout << "Submit another entry (-999 to quit): ";
	getline(cin, userString); // Acquires next string for analysis
}

void farewell()
{
	cout << "\nLeaving so soon?? Well, I hope I have provided some \"value\" to you! Ha! That's just a little math humor.\n"
		<< "By the way, the cumulative ASCII value of the characters in the string \"-999\" is 216.\n"
		<< "See you next time!\n\n";
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
