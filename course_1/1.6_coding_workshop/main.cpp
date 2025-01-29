#include <iostream>
using namespace std;

void printExitInstructions()
{
    cout << "0: Exit the application." << endl;
}

void printHelp()
{
    cout << "1: View help and app information." << endl;
}

void printMarketStatistics()
{
    cout << "2: View market statistics." << endl;
}

void placeABuyOffer()
{
    cout << "3: Place a buy offer." << endl;
}

void placeASellBid()
{
    cout << "4: Place a sell bid." << endl;
}

void viewWallet()
{
    cout << "5: View your wallet." << endl;
}

void goToNextTimeframe()
{
    cout << "6: Go to next timeframe." << endl;
}

// Function to display the menu
void printMenu()
{
    printExitInstructions();
    printHelp();
    printMarketStatistics();
    placeABuyOffer();
    placeASellBid();
    viewWallet();
    goToNextTimeframe();
}

int getUserChoice()
{
    int userChoice;

    cout << "Select an option (0-6): ";
    cin >> userChoice;

    return userChoice;
}

void processUserChoice(int userChoice)
{
    switch (userChoice)
    {
        case 0:
            cout << "Exiting the application..." << endl;
            exit(0);
            break;
        case 1:
            cout << "Help: Use this app to trade stocks or cryptocurrencies, monitor markets, and manage your portfolio efficiently." << endl;
            break;
        case 2:
            cout << "Market Statistics: Displaying the latest market trends and data for your selected stocks or coins." << endl;
            break;
        case 3:
            cout << "Place a Buy Offer: Enter the details of the asset you'd like to purchase and your offer price." << endl;
            break;
        case 4:
            cout << "Place a Sell Bid: Enter the details of the asset you'd like to sell and your asking price." << endl;
            break;
        case 5:
            cout << "Portfolio: Here is an overview of your holdings, including asset types, quantities, and current values." << endl;
            break;
        case 6:
            cout << "Proceeding to the next market session... Stay tuned for updates!" << endl;
            break;
        default:
            cout << "Invalid selection. Please choose a valid option (0-6)." << endl;
            break;

        // Add a line for better output formatting
        cout << "========================" << endl;
    }
}

int main() {

    while (true)
    {
        printMenu();
        int userChoice = getUserChoice();
        processUserChoice(userChoice);
    }

    return 0;
}

