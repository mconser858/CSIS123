// Chapter 6 Assignment 6.26.cpp : Program to Determine Inflation Rates

#include <iostream>
#include <iomanip>

using namespace std;

void getPricesInitial(double& latest, double& middle, double& oldest);
void getPricesFollowup(double& latest, double& middle, double& oldest);
void calculateInflation(double latest, double middle, double oldest, double& inflationLatest, double& inflationMiddle);
void printResults(double inflationLatest, double inflationMiddle);

int main()
{
    double latestPrice, middlePrice, oldestPrice;
    double inflationRateLatest, inflationRateMiddle;

    getPricesInitial(latestPrice, middlePrice, oldestPrice);
    while (latestPrice != -999)
    {
        calculateInflation(latestPrice, middlePrice, oldestPrice, inflationRateLatest, inflationRateMiddle);
        printResults(inflationRateLatest, inflationRateMiddle);
        getPricesFollowup(latestPrice, middlePrice, oldestPrice);
    }

    cout << "\nGoodbye!\n";

    return 0;
}

void getPricesInitial(double& latest, double& middle, double& oldest)
{
    do
    {
        cout << "To learn the inflation rate for a commodity, enter:\n"
            << "The item's current price, its price one year ago, and its price two years ago.\n"
            << "Please format your entry as follows: 9.87 6.54 3.21\n"
            << "(To end this program, enter: -999)\n";
        cin >> latest;
        if (latest == -999)
        {
            return;
        }
        cin >> middle >> oldest;
        cout << endl;
        if (latest <= 0 || middle <= 0 || oldest <= 0)
        {
            cout << "Prices must be positive numbers.\n\n";
        }
    } 
    while (latest <= 0 || middle <= 0 || oldest <= 0);        
}

void getPricesFollowup(double& latest, double& middle, double& oldest)
{
    do
    {
        cout << "\n\nEnter the item's current price, its price one year ago, and its price two years ago (-999 to quit).\n";
        cin >> latest;
        if (latest == -999)
        {
            return;
        }
        cin >> middle >> oldest;
        cout << endl;
        if (latest <= 0 || middle <= 0 || oldest <= 0)
        {
            cout << "Prices must be positive numbers.\n\n";
        }
    } while (latest <= 0 || middle <= 0 || oldest <= 0);
}

void calculateInflation(double latest, double middle, double oldest, double& inflationLatest, double& inflationMiddle)
{
    inflationLatest = (latest - middle) / middle * 100;
    inflationMiddle = (middle - oldest) / oldest * 100; 
}

void printResults(double inflationLatest, double inflationMiddle)
{
    cout << setprecision(2) << fixed;
    cout << "Between this year and last, prices inflated by " << inflationLatest << "%.\n"
         << "Between last year and the year prior, prices inflated by " << inflationMiddle << "%.\n";
    cout << "Based on this data, the rate of inflation ";
    if (inflationLatest > inflationMiddle)
    {
        cout << "is increasing.\n";
    }
    else if (inflationLatest < inflationMiddle)
    {
        cout << "is decreasing.\n";
    }
    else
    {
        cout << "is stable.\n";
    }
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
