
// Muneeb Khalid
// Assignment 3

#include <iostream>
using namespace std;

int main() {
    int temperature;  // Stores the temperature entered by the user

    cout << "Enter the temperature (F): ";  // Asks the user for the temperature
    cin >> temperature;                    // Gets the temperature from the user

    if (temperature < 32) {
        cout << "That's Freezing.";        // Prints Freezing for temperatures below 32
    }
    else if (temperature <= 59) {
        cout << "That's Cold.";            // Prints Cold for temperatures from 32 to 59
    }
    else if (temperature <= 75) {
        cout << "That's Mild.";            // Prints Mild for temperatures from 60 to 75
    }
    else {
        cout << "That's Hot.";             // Prints Hot for temperatures 76 and above
    }

    return 0;  // Ends the program.
}