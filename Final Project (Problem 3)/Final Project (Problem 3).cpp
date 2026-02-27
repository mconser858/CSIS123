// Final Project (Problem 3).cpp : Program to determine balance of department store credit accounts

#include <iomanip>
#include <iostream>

void inputRetrieval(int& accountNo, double& startingBalance, double& charges, double& credits, double& creditLimit);
double calculateBalance(double startingBalance, double charges, double credits);
void outputAccountStatus(int accountNo, double currentBalance, double creditLimit);

using namespace std;

int main()
{
    int accountNo;
    double startingBalance;
    double currentBalance;
    double charges;
    double credits;
    double creditLimit;
    
    for (int i = 0; i < 10; i++)
    {
        inputRetrieval(accountNo, startingBalance, charges, credits, creditLimit);
        currentBalance = calculateBalance(startingBalance, charges, credits);
        outputAccountStatus(accountNo, currentBalance, creditLimit);
    }
}

void inputRetrieval(int& accountNo, double& startingBalance, double& charges, double& credits, double& creditLimit)
{
    cout << "Please enter the following\n";
    cout << "Customer account #";
    cin >> accountNo;
    cout << "Beginning balance: $";
    cin >> startingBalance;
    cout << "Total new charges: $";
    cin >> charges;
    cout << "Total new credits: $";
    cin >> credits;
    cout << "Credit limit: $";
    cin >> creditLimit;
    cout << endl;
}
double calculateBalance(double startingBalance, double charges, double credits)
{
    double newBalance = startingBalance + charges - credits;
    return newBalance;
}
void outputAccountStatus(int accountNo, double currentBalance, double creditLimit)
{
    cout << "Account #" << accountNo;
    cout << fixed << setprecision(2);
    if (currentBalance < creditLimit)
    {
        cout << ": $" << creditLimit - currentBalance << " credit available";
    }
    else if (currentBalance == creditLimit)
    {
        cout << " has reached their credit limit.";
    }
    else
    {
        cout << " CREDIT LIMIT EXCEEDED\nCredit Limit: $" << creditLimit << "\nCurrent Balance: $" << currentBalance
            << "\nCustomer is overdrafted by $" << currentBalance - creditLimit << ".";
    }
    cout << endl << endl;
}