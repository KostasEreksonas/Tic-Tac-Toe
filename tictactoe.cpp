#include <iostream>
#include "functions.h"

// Run the game until victory or a tie
bool win=false;
bool tie=false;

int main() {

	// Define symbols for each player
	char player1='X';
	char player2='O';

	// Initialize a variable to store a number of the chosen space
	int num;

	while (win != true || tie != true) {

		if (counter % 2 == 0) {

			std::cout << "Choose a space for player 1: ";
			std::cin >> num;

			choice(player1, num);
			board();

			if (win != checkWin()) {
				break;
			}
			if (tie != checkTie()) {
				break;
			}

		}

		else {

			std::cout << "Choose a space for player 2: ";
			std::cin >> num;

			choice(player2, num);
			board();

			if (win != checkWin()) {
				break;
			}
			if (tie != checkTie()) {
				break;
			}

		}


	}

	return 0;

}
