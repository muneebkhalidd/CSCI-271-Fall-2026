// Muneeb Khalid
// Assignment 3

#include <iostream>
using namespace std;


int main() {
    int age;       // Stores the user's age
    int isMember;  // Stores 1 for yes and 0 for no

    cout << "Enter your age: ";  // Asks the user for their age
    cin >> age;                  // Gets the age from the user

    cout << "Are you a member? (1 = yes, 0 = no): ";  // Asks if the user is a member
    cin >> isMember;                                      // Gets the member answer

    if (age >= 60 || (age >= 18 && isMember == 1)) {  // Checks if the user qualifies
        cout << "You qualify for the discount.";      // Prints this if they qualify
    }
    else {
        cout << "You do not qualify for the discount."; // Prints this if they don't qualify
    }

    return 0;  // Ends the program.
}