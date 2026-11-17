#include <iostream>
#include <vector>
#include <utility> // Needed for std::swap

using namespace std;

int findLargest(const vector<int>& numbers) {
    if (numbers.empty()) {
        return 0; // Return 0 if the vector has no elements
    }
    
    int largest = numbers[0];
    for (int number : numbers) {
        if (number > largest) {
            largest = number;
        }
    }
    return largest;
}

void reverseArray(vector<int>& numbers) {
    int left = 0;
    int right = static_cast<int>(numbers.size()) - 1;
    
    while (left < right) {
        swap(numbers[left], numbers[right]);
        left++;
        right--;
    }
}

void countEvenOdd(const vector<int>& numbers) {
    int even = 0;
    int odd = 0;
    
    for (int number : numbers) {
        if (number % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    cout << "Even Numbers: " << even << '\n';
    cout << "Odd Numbers: " << odd << '\n';
}

int main() {
    vector<int> numbers = {10, 25, 30, 45, 50, 65};

    cout << "Original Array: ";
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << "\n\n";

    // Problem 1
    cout << "Largest Element: " << findLargest(numbers) << '\n';

    // Problem 2
    reverseArray(numbers);
    cout << "Reversed Array: ";
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << "\n\n";

    // Problem 3
    countEvenOdd(numbers);

    return 0;
}
