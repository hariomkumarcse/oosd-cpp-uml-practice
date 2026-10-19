#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    constexpr double USD_TO_INR = 85.0;

    int choice;
    double amount, result;

    cout << "===== Currency Converter =====\n";
    cout << "1. USD to INR\n";
    cout << "2. INR to USD\n";
    cout << "Choose conversion: ";

    if (!(cin >> choice) || (choice != 1 && choice != 2)) {
        cerr << "Error: Choose 1 or 2.\n";
        return 1;
    }

    cout << "Enter amount: ";
    if (!(cin >> amount) || amount < 0) {
        cerr << "Error: Enter a valid non-negative amount.\n";
        return 1;
    }

    if (choice == 1) {
        result = amount * USD_TO_INR;
        cout << fixed << setprecision(2);
        cout << amount << " USD = " << result << " INR\n";
    } else {
        result = amount / USD_TO_INR;
        cout << fixed << setprecision(2);
        cout << amount << " INR = " << result << " USD\n";
    }

    cout << "Note: The example exchange rate is 1 USD = "
         << USD_TO_INR << " INR.\n";

    return 0;
}
