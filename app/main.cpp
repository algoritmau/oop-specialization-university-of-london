#include <iostream>
#include <map>
using namespace std;

// Map to store menu options
map<int, void (*)()> menuOptions;

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

// Map menu options to their respective functions
void mapMenuOptionsToFunctions()
{
    menuOptions[0] = printExitInstructions;
    menuOptions[1] = printHelp;
    menuOptions[2] = printMarketStatistics;
    menuOptions[3] = placeABuyOffer;
    menuOptions[4] = placeASellBid;
    menuOptions[5] = viewWallet;
    menuOptions[6] = goToNextTimeframe;
}


// Function to display the menu
void printMenu()
{
    mapMenuOptionsToFunctions();
    menuOptions[0]();
    menuOptions[1]();
    menuOptions[2]();
    menuOptions[3]();
    menuOptions[4]();
    menuOptions[5]();
    menuOptions[6]();
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
            cout << "Wallet: Here is an overview of your holdings, including asset types, quantities, and current values." << endl;
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

struct Transaction {
    enum class Category {BUY, SELL};

    string timestamp;
    Category category;
    string currencyPair;
    double price;
    double volume;

    Transaction(string ts, Category cat, string pair, double p, double vol) : timestamp(ts), category(cat), currencyPair(pair), price(p), volume(vol) {}

    void print() const {
      cout << "Transaction details " << endl << "\t- Timestamp: " << timestamp << endl << "\t- Currencies: " << currencyPair << endl << "\t- Price: " << price << endl << "\t- Volume: " << volume << endl;
     }
};

double calculateAveragePrice(const vector<Transaction>& transactions) {
  double total = 0;

  for (auto& t : transactions) {
    total += t.price;
  }

  return total / transactions.size();
}

double calculateHighestPrice(const vector<Transaction>& transactions) {
  double highest = 0;

  for (auto& t : transactions) {
    if (t.price > highest) {
      highest = t.price;
    }
  }

  return highest;
}

double calculateLowestPrice(const vector<Transaction>& transactions) {
  double lowest = transactions[0].price;

  for (auto& t : transactions) {
    if (t.price < lowest) {
      lowest = t.price;
    }
  }

  return lowest;
}

double calculatePriceSpread(const vector<Transaction>& transactions) {
  double highest = calculateHighestPrice(transactions);
  double lowest = calculateLowestPrice(transactions);

  return highest - lowest;
}

int main() {
    vector<Transaction> transactions;

    transactions.push_back(Transaction("2021-01-01", Transaction::Category::BUY, "BTC/USD", 10000, 100));
    transactions.push_back(Transaction("2025-03-03", Transaction::Category::SELL, "BTC/USD", 72500, 720));

    cout << "Transactions: " << endl;
    for (auto& t : transactions) {
      t.print();
      cout << endl;
    }

    cout << "Average price: " << calculateAveragePrice(transactions) << endl;
    cout << "Highest price: " << calculateHighestPrice(transactions) << endl;
    cout << "Lowest price: " << calculateLowestPrice(transactions) << endl;
    cout << "Price spread: " << calculatePriceSpread(transactions) << endl;

//    while (true)
//    {
//        printMenu();
//        int userChoice = getUserChoice();
//        processUserChoice(userChoice);
//    }

    return 0;
}

