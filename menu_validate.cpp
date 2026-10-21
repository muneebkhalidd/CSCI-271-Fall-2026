// Muneeb Khalid
// Assignment 4


#include <iostream>
using namespace std;


int main() {
    int choice;  // stores the menu choice entered by the user

    do {
        cout << "Enter a menu choice (1, 2, or 3): ";  // asks for a menu choice
        cin >> choice;                                  // gets the choice from the user

        if (choice != 1 && choice != 2 && choice != 3) {
            cout << "Invalid choice, try again." << endl; // tells the user the choice is invalid
                                                        
        }

    } while (choice != 1 && choice != 2 && choice != 3);  // keeps asking until the choice is valid

    cout << "You selected option " << choice << ".";  // prints the valid choice

    return 0;  // ends the program
}