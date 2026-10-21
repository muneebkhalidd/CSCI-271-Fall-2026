// Muneeb Khalid
// Assignment 4


#include <iostream> // let us use cin cout
using namespace std;


int main() {      // function starts here
    int number;  // stores the number entered by the user

    cout << "Enter a number: ";  // asks the user for a number
    cin >> number;               // gets the number from the user
    for (int i = 1; i < 11; i++) {  // repeats the multiplication from range 1 to 10
        cout << number << " x " << i << " = " << number * i << endl;  // prints each multiplication result
                                      
    }

    return 0;  // ends the program
}