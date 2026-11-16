#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct InterviewQA {
    string question;
    string explanation;
    string example;
    string feature;
};

int main() {
    vector<InterviewQA> qaList = {
        {
            "1. Is C++ completely object-oriented?",
            "No. C++ allows primitive types (int, char) without objects, global variables, and a standalone main() function outside any class.",
            "int x = 10; inside int main() { return 0; } runs without defining any class or object.",
            "Multi-paradigm programming (Procedural + OOP)"
        },
        {
            "2. What is the difference between malloc() and new?",
            "malloc() is a C function that allocates raw uninitialized memory and returns void*. new is a C++ operator that calculates size automatically, returns the exact pointer type, and calls the constructor.",
            "C: int* p = (int*)malloc(sizeof(int)); | C++: Student* s = new Student();",
            "Dynamic Memory Management & Constructors"
        },
        {
            "3. Can C support object-oriented programming?",
            "Not natively, as it lacks classes, access specifiers, and inheritance. However, basic OOP behavior can be mimicked using structs and function pointers.",
            "struct Dog { void (*bark)(); };",
            "Procedural Programming, struct, and Function Pointers"
        },
        {
            "4. What is the difference between a pointer and reference?",
            "A pointer stores a memory address, can be NULL, and can be reassigned. A reference is a permanent alias for an existing variable, cannot be NULL, and must be initialized at declaration.",
            "int a = 5, b = 10; int* ptr = &a; ptr = &b; (Valid) | int& ref = a; (Locked to a)",
            "Memory Indirection vs. Reference Variables"
        },
        {
            "5. Why is function overloading not supported in C?",
            "C identifies functions strictly by their exact name without name mangling, so two functions with the same name cause a linker collision.",
            "void print(int a) and void print(double a) compile in C++ via name mangling, but fail in C.",
            "Compile-time Polymorphism & Name Mangling"
        },
        {
            "6. What is encapsulation?",
            "Bundling data and the methods that operate on it into a single class while restricting direct external access to protect data integrity.",
            "Making 'double balance;' private in a BankAccount class and modifying it only via a public deposit() method.",
            "Classes and Access Specifiers (private, protected, public)"
        },
        {
            "7. What is runtime polymorphism?",
            "Resolving a call to an overridden method at runtime rather than compile time, allowing a base pointer to execute a derived class method.",
            "Shape* s = new Circle(); s->draw(); executes Circle::draw() instead of Shape::draw().",
            "Inheritance, Method Overriding, and Dynamic Binding"
        },
        {
            "8. What is the purpose of a virtual function?",
            "It instructs the compiler to use dynamic dispatch (via vtable) so the most derived version of a function is called based on the actual object type at runtime.",
            "Declaring 'virtual void makeSound()' in Animal so Animal* a = new Cat(); a->makeSound(); calls Cat's version.",
            "virtual keyword, Virtual Table (vtable), and Virtual Pointer (vptr)"
        },
        {
            "9. What is the difference between struct and class?",
            "In C++, struct members and inheritance are public by default, whereas class members and inheritance are private by default. (In C, structs cannot hold methods).",
            "struct Point { int x; }; // x is public | class Box { int w; }; // w is private",
            "User-Defined Data Types & Default Access Control"
        },
        {
            "10. What is the difference between free() and delete?",
            "free() simply releases raw memory allocated by malloc(). delete invokes the object's destructor first to clean up resources and then frees memory allocated by new.",
            "delete fileObj; runs ~FileObj() to close open files before freeing RAM; free(fileObj) skips the destructor.",
            "Memory Deallocation & Destructors"
        }
    };

    cout << "====================================================\n";
    cout << "        C vs C++ Concept Interview Questions        \n";
    cout << "====================================================\n\n";

    for (const auto& item : qaList) {
        cout << item.question << "\n";
        cout << "  -> Explanation : " << item.explanation << "\n";
        cout << "  -> Example     : " << item.example << "\n";
        cout << "  -> Feature     : " << item.feature << "\n";
        cout << "----------------------------------------------------\n";
    }

    return 0;
}
