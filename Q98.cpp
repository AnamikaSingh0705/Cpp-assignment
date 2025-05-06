#include <iostream>
#include <string>
using namespace std;

class Game {
private:
    string playerName;
    int score;

public:
    Game(const string& name) : playerName(name), score(0) {}

    void performAction(const string& action) {
        if (action == "jump") {
            score += 10;
            cout << playerName << " jumps! +10 points." << endl;
        } else if (action == "run") {
            score += 5;
            cout << playerName << " runs! +5 points." << endl;
        } else if (action == "slide") {
            score += 7;
            cout << playerName << " slides! +7 points." << endl;
        } else {
            cout << "Unknown action: " << action << endl;
        }
    }

    void showScore() const {
        cout << playerName << "'s score: " << score << endl;
    }
};
