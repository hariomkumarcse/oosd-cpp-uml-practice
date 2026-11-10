#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    
    vector<int> numbers = {50, 20, 40, 10, 30};

    cout << "Original Vector: ";

    for (int number : numbers) {
        cout << number << " ";
    }

    sort(numbers.begin(), numbers.end());

    cout << "\nSorted Vector: ";

    for (int number : numbers) {
        cout << number << " ";
    }

    string name = "Hariom";

    cout << "\nName: " << name << '\n';
    cout << "Name Length: " << name.length() << '\n';

    map<string, int> studentMarks;

    studentMarks["Hariom"] = 90;
    studentMarks["Rahul"] = 85;
    studentMarks["Aman"] = 88;

    cout << "\nStudent Marks:\n";

    for (const auto& student : studentMarks) {
        cout << student.first << ": "
             << student.second << '\n';
    }

    return 0;
}
