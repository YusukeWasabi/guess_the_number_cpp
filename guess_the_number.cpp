#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{

    int secretNum = rand() % 4;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int guessTries = 3;
    bool outOfGuesses = false;

    while (secretNum != guess && !outOfGuesses)
    {
        if (guessCount < guessLimit)
        {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
            guessTries--;
            cout << "\nYou still have " << guessTries << " tries." << endl;
        }
        else
        {
            outOfGuesses = true;
        }
    }
    if (outOfGuesses)
    {
        cout << "\nOut of guesses" << endl;
        cout << "You lose!" << endl;
        cout << "The secret number was " << secretNum << endl;
    }
    else
    {
        cout << "\nYou win!" << endl;
        cout << "You've made it in " << guessCount << " tries." << endl;
        cout << "The secret number was " << secretNum << endl;
    }
    return 0;
}
