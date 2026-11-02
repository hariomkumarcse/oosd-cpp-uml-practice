#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "C vs C++ Memory Management\n\n";

    cout << "C:\n";
    cout << "1. malloc() allocates memory\n";
    cout << "2. calloc() allocates zero-initialized memory\n";
    cout << "3. realloc() changes allocated block size\n";
    cout << "4. free() releases allocated memory\n\n";

    cout << "C++:\n";
    cout << "1. new allocates memory and initializes objects\n";
    cout << "2. delete releases a single object\n";
    cout << "3. new[] allocates an array\n";
    cout << "4. delete[] releases an array\n\n";

    int* cNumber = static_cast<int*>(malloc(sizeof(int)));

    if (cNumber == nullptr) {
        cout << "C-style allocation failed.\n";
        return 1;
    }

    *cNumber = 100;

    cout << "C-style allocated value: " << *cNumber << '\n';

    free(cNumber);

    int* cppNumber = new int(200);

    cout << "C++-style allocated value: " << *cppNumber << '\n';

    delete cppNumber;
    cppNumber = nullptr;

    return 0;
}
