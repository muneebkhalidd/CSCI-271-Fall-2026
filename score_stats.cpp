
// Muneeb Khalid
// Assignment 5

#include <iostream> // lets us use cout and cin
using namespace std; // so we dont have to write std:: everywhere

int main() { // program starts here

    const int SIZE = 5; // sets the array size to 5
    int scores[SIZE]; // stores the 5 test scores
    int sum = 0; // starts the total at 0

    for (int i = 0; i < SIZE; i++) { // repeats 5 times to get the scores
        cout << "Enter score " << i + 1 << ": "; // asks for each score
        cin >> scores[i]; // saves the score in the array
    }

    for (int i = 0; i < SIZE; i++) { // goes through all the scores
        sum += scores[i]; // adds each score to the total
    }

    double average = static_cast<double>(sum) / SIZE; // calculates the average with decimals

    int highest = scores[0]; // starts with the first score as the highest
    int lowest = scores[0]; // starts with the first score as the lowest

    for (int i = 1; i < SIZE; i++) { // starts checking from the second score

        if (scores[i] > highest) { // checks if the score is higher
            highest = scores[i]; // updates the highest score
        }

        if (scores[i] < lowest) { // checks if the score is lower
            lowest = scores[i]; // updates the lowest score
        }
    }

    cout << "Scores: "; // prints the scores label

    for (int i = 0; i < SIZE; i++) { // goes through all the scores
        cout << scores[i] << " "; // prints each score on the same line
    }

    cout << endl; // moves to the next line
    cout << "Sum: " << sum << endl; // prints the total
    cout << "Average: " << average << endl; // prints the average
    cout << "Highest: " << highest << endl; // prints the highest score
    cout << "Lowest: " << lowest << endl; // prints the lowest score

    return 0; // ends the program
}
