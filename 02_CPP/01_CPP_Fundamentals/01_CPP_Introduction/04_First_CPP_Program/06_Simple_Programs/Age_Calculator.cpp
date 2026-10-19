#include <iostream>
using namespace std;

int main() {
    int birthYear, currentYear;

    cout << "Enter birth year: ";
    if (!(cin >> birthYear)) {
        cerr << "Error: Invalid birth year.\n";
        return 1;
    }

    cout << "Enter current year: ";
    if (!(cin >> currentYear)) {
        cerr << "Error: Invalid current year.\n";
        return 1;
    }

    if (birthYear <= 0 || currentYear < birthYear) {
        cerr << "Error: Please enter valid years.\n";
        return 1;
    }

    int age = currentYear - birthYear;

    cout << "Your approximate age is " << age << " years.\n";
    cout << "This assumes your birthday has already occurred this year.\n";

    return 0;
}