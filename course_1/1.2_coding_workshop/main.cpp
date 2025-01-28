#include <iostream>
using namespace std;

// Function to display the menu
void printMenu() {
    cout << "1: View help and app information." << endl;
    cout << "2: View market statistics." << endl;
    cout << "3: Place a buy offer." << endl;
    cout << "4: Place a sell bid." << endl;
    cout << "5: View your portfolio." << endl;
    cout << "6: Proceed to the next market session." << endl;
    cout << "0: Exit the application." << endl;
    cout << "========================" << endl;
    cout << "Select an option (0-6): ";
}

int main() {
    bool running = true;

    while (running) {
        // Display menu
        printMenu();

        // Get user input
        int userChoice;
        cin >> userChoice;

        // Handle menu options using a switch statement
        switch (userChoice) {
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
            case 0:
                cout << "Exiting the application. Thank you for using our trading platform. See you next time!" << endl;
                running = false;
                break;
            default:
                cout << "Invalid selection. Please choose a valid option (0-6)." << endl;
                break;
        }

        // Add a line for better output formatting
        cout << "========================" << endl;
    }

    return 0;
}

