
// Muneeb Khalid
// Assignment 5

#include <iostream> // lets us use cout and cin
using namespace std;

int main() { // the program starts here

    const int SIZE = 10; // sets the array size to 10
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; // stores the given numbers

    int target; // stores the number we want to find
    int foundIndex = -1; // starts at -1 to show nothing has been found yet
    int count = 0; // starts the count at 0

    cout << "Enter a number to search for: "; // asks the user for a number
    cin >> target; // gets the number from the user

    for (int i = 0; i < SIZE; i++) { // checks every number in the array

        if (data[i] == target) { // checks if the number matches
            count++; // adds 1 each time we find a match

            if (foundIndex == -1) { // checks if this is the first match
                foundIndex = i; // saves the position of the first match
            }
        }
    }

    if (foundIndex != -1) { // checks if the number was found
        cout << target << " first found at index " << foundIndex << endl; // prints the first index
        cout << target << " appears " << count << " time(s)" << endl; // prints how many times it appears
    }
    else { // runs if the number was not found
        cout << target << " was not found." << endl; // tells the user the number was not found
    }

    return 0; // ends the program
}
