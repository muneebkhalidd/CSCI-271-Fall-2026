
// Muneeb Khalid
// Assignment 5
// i used blackbox ai for understanding and building this code


#include <iostream> // lets us use cout and cin
using namespace std;

void printForward(const int arr[], int size) { // makes a function to print numbers in order
    cout << "Forward: "; // prints the forward label

    for (int i = 0; i < size; i++) { // starts from the first number and moves forward
        cout << arr[i] << " "; // prints each number
    }

    cout << endl; // moves to the next line
}

void printReverse(const int arr[], int size) { // makes a function to print numbers backward
    cout << "Reverse: "; // prints the reverse label

    for (int i = size - 1; i >= 0; i--) { // starts from the last number and moves backward
        cout << arr[i] << " "; // prints each number
    }

    cout << endl; // moves to the next line
}

int countAbove(const int arr[], int size, int limit) { // makes a function to count numbers above the limit
    int count = 0; // starts the count at 0

    for (int i = 0; i < size; i++) { // checks every number in the array

        if (arr[i] > limit) { // checks if the number is greater than the limit
            count++; // adds 1 if the number is greater
        }
    }

    return count; // sends the final count back
}

int main() { // program starts here

    const int SIZE = 6; // sets the array size to 6
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // stores the given numbers
    int limit; // stores the limit entered by the user

    printForward(values, SIZE); // prints the numbers in order
    printReverse(values, SIZE); // prints the numbers backward

    cout << "Count values above: "; // asks the user for a limit
    cin >> limit; // gets the limit from the user

    cout << "Count: " << countAbove(values, SIZE, limit) << endl; // prints how many numbers are above the limit

    return 0; // ends the program
}

