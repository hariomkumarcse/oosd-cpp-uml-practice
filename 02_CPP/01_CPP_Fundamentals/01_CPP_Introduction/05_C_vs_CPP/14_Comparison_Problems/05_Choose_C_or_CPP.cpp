#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "C vs C++: Choose the Right Language\n\n";

    cout << "1. Embedded systems programming\n";
    cout << "2. Large object-oriented applications\n";
    cout << "3. Operating system components\n";
    cout << "4. Game engine development\n";
    cout << "5. Competitive programming\n";
    cout << "6. Hardware-level programming\n";
    cout << "7. High-performance applications\n\n";

    cout << "Your task:\n";
    cout << "For each situation, decide whether C, C++,\n";
    cout << "or either language is appropriate.\n\n";

    string answers[7];

    for (int i = 0; i < 7; i++) {
        cout << "Enter your choice for situation "
             << i + 1 << " (C / C++ / Either): ";

        cin >> answers[i];
    }

    cout << "\nYour Decisions:\n";

    for (int i = 0; i < 7; i++) {
        cout << "Situation " << i + 1
             << ": " << answers[i] << '\n';
    }

    cout << "\nExplain why you selected each language.\n";

    return 0;
}
