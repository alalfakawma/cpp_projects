#include <iostream>

using namespace std;

int main() {
	// Guess the number game
	srand(time(NULL));

	int theNumber = (rand() % 10) + 1;
	int tries = 0;
	int guessedNumber;
	char answer;

	cout << "Are you ready to play the game? [y/n]" << endl;
	cin >> answer;

	if (answer == 'y' || answer == 'Y') {
		cout << "Great!!.. Guess a number between 1 and 10" << endl;

		do {
			tries++;
			cin >> guessedNumber;
			if (guessedNumber > theNumber) {
				cout << "Guess lower.." << endl;
			} else if (guessedNumber < theNumber) {
				cout << "Guess higher.." << endl;
			} else if (guessedNumber == theNumber) {
				cout << "Well done, you guessed the right number after " << tries << " tries." << endl;
			}
		}
		while(guessedNumber != theNumber);

	} else {
		cout << "Oh well... You can always come back later!!" << endl;
	}

	return 0;
}