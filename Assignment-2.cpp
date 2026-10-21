#include <iostream>
#include <string>    // To use the string data type
using namespace std; //So we don't have to keep writing std:: everywhere

int main() {         // Program starts here
    string name;     // Makes a variable to store the user's name
    int age;         // Makes a variable to store the user's age

    cout << "Enter your name: ";    // Asks the user to enter their name
    cin >> name;                    // Gets the name from the user
 
    cout << "Enter your age: ";     // Asks the user to enter their age
    cin >> age;                     // Gets the age from the user

    cout << "Hello, I am " << name << "! I am " << age << " years old.";     // Prints the greeting with the name and age

    return 0;                      // Ends the program 
}