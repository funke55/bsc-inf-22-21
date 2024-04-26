#include <iostream>
#include <string>
#include <limits>
 using namespace std;

int main() {
    // Dynamically allocate an integer
    int* myInt = new int;

    // Dynamically allocate a string
     string* myString = new std::string;

    // Prompt the user and assign a value to the dynamically allocated integer
    cout << "Enter an integer value: ";
    cin >> *myInt;

    // Clear the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Prompt the user and assign a value to the dynamically allocated string
    cout << "Enter a string: ";
    getline(std::cin, *myString);

    // Output the values onto the console
    cout << "The value of the dynamically allocated integer is: " << *myInt << endl;
    cout << "The value of the dynamically allocated string is: " << *myString << endl;

    // Clean up the dynamically allocated memory
    delete myInt;
    delete myString;

    return 0;
}
