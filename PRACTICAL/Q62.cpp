#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Seed for random number
    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess the number (between 1 and 100): ";

    while (true) {
        cin >> guess;

        if (guess < secret)
            cout << "Too low! Try again: ";
        else if (guess > secret)
            cout << "Too high! Try again: ";
        else {
            cout << "Congratulations! You guessed it." << endl;
            break;
        }
    }

    return 0;
}
