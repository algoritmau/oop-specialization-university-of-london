#include <iostream>
using namespace std;

int main()
{
    while (true) {
        // Print a list of options (menu)
        cout << "1: View help and app information." << endl;
        cout << "2: View exchange stats." << endl;
        cout << "3: Make an offer." << endl;
        cout << "4: Make a bid." << endl;
        cout << "5: Print wallet." << endl;
        cout << "6: Continue" << endl;
        cout << "========================" << endl;
        cout << "Select an option (1-6): ";

        int userChoice;
        cin >> userChoice;

        if (userChoice == 0)
        {
            cout << "Please select a valid menu option.";
        }

        if (userChoice == 1)
        {
            cout << "Help: This is a simple exchange program." << endl;
        }

        if (userChoice == 2)
        {
            cout << "Exchange stats: " << endl;
        }

        if (userChoice == 3)
        {
            cout << "Enter an offer: " << endl;
        }

        if (userChoice == 4)
        {
            cout << "Enter a bid: " << endl;
        }

        if (userChoice == 5)
        {
            cout << "Your wallet: " << endl;
        }

        if (userChoice == 6)
        {
            cout << "Going to the next step." << endl;
        }
    }

    return 0;
}
