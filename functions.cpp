#include <iostream>
#include "functions.h"

// Create a double array to store space values of tic tac toe board
char spaces[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

// When a space is selected, mark it as occupied
bool occupied[3][3]={{false, false, false}, {false, false, false}, {false, false, false}};

// Alternate between player 1 and player 2
int counter = 0;

void board() {

    std::cout << "    |    |    \n";
    std::cout << "  " << spaces[0][0] << " |  " << spaces[0][1] << " |  " << spaces[0][2] << " \n";
    std::cout << "____|____|____\n";
    std::cout << "    |    |    \n";
    std::cout << "  " << spaces[1][0] << " |  " << spaces[1][1] << " |  " << spaces[1][2] << " \n";
    std::cout << "____|____|____\n";
    std::cout << "    |    |    \n";
    std::cout << "  " << spaces[2][0] << " |  " << spaces[2][1] << " |  " << spaces[2][2] << " \n";
    std::cout << "    |    |    \n";

}

void choice(char player, int space) {

	switch(space) {

		case 1:
			if (spaces[0][0] == 'X' || spaces[0][0] == 'O') {
				std::cout << "Space 1 is already occupied, please choose another.\n";
				break;
			}
			else if (spaces[0][0] != 'X' || spaces[0][0] != 'O') {
				spaces[0][0] = player;
				occupied[0][0] = true;
				counter++;
				break;
			}

		case 2:
			if (spaces[0][1] == 'X' || spaces[0][1] == 'O') {
				std::cout << "Space 2 is already occupied, please choose another.\n";
				break;
			}
			else if (spaces[0][1] != 'X' || spaces[0][1] != 'O') {
				spaces[0][1] = player;
				occupied[0][1] = true;
				counter++;
				break;
			}

		case 3:
			if (spaces[0][2] == 'X' || spaces[0][2] == 'O') {
				std::cout << "Space 3 is already occupied, please choose another.\n";
				break;
			}
			else if (spaces[0][2] != 'X' || spaces[0][2] != 'O') {
				spaces[0][2] = player;
				occupied[0][2] = true;
				counter++;
				break;
			}

		case 4:
			if (spaces[1][0] == 'X' || spaces[1][0] == 'O') {
				std::cout << "Space 4 is already occupied, please choose another.\n";
				break;
			}
			else if (spaces[1][0] != 'X' || spaces[1][0] != 'O') {
				spaces[1][0] = player;
				occupied[1][0] = true;
				counter++;
				break;
			}

		case 5:
			if (spaces[1][1] == 'X' || spaces[1][1] == 'O') {
				std::cout << "Space 5 is already occupied, please choose another.\n";
				break;
			}
			else if (spaces[1][1] != 'X' || spaces[1][1] != 'O') {
				spaces[1][1] = player;
				occupied[1][1] = true;
				counter++;
				break;
			}

		case 6:
			if (spaces[1][2] == 'X' || spaces[1][2] == 'O') {
				std::cout << "Space 6 is already occupied, please choose another.\n";
				break;
			}
			else if (spaces[1][2] != 'X' || spaces[1][2] != 'O') {
				spaces[1][2] = player;
				occupied[1][2] = true;
				counter++;
				break;
			}

		case 7:
			if (spaces[2][0] == 'X' || spaces[2][0] == 'O') {
				std::cout << "Space 7 is already occupied, please choose another.\n";
				break;
			}
			else if (spaces[2][0] != 'X' || spaces[2][0] != 'O') {
				spaces[2][0] = player;
				occupied[2][0] = true;
				counter++;
				break;
			}

		case 8:
			if (spaces[2][1] == 'X' || spaces[2][1] == 'O') {
				std::cout << "Space 8 is already occupied, please choose another.\n";
				break;
			}
			else if (spaces[2][1] != 'X' || spaces[2][1] != 'O') {
				spaces[2][1] = player;
				occupied[2][1] = true;
				counter++;
				break;
			}

		case 9:
			if (spaces[2][2] == 'X' || spaces[2][2] == 'O') {
				std::cout << "Space 9 is already occupied, please choose another.\n";
				break;
			}
			else if (spaces[2][2] != 'X' || spaces[2][2] != 'O') {
				spaces[2][2] = player;
				occupied[2][2] = true;
				counter++;
				break;
			}

		default:
			std::cout << "Invalid number selected, please try again.\n";

	}

}

bool checkWin() {

	if ((spaces[0][0] == 'X' && spaces[0][1] == 'X' && spaces[0][2] == 'X') || (spaces[1][0] == 'X' && spaces[1][1] == 'X' && spaces[1][2] == 'X') || (spaces[2][0] == 'X' && spaces[2][1] == 'X' && spaces[2][2] == 'X') || (spaces[0][0] == 'X' && spaces[1][0] == 'X' && spaces[2][0] == 'X') || (spaces[0][1] == 'X' && spaces[1][1] == 'X' && spaces[2][1] == 'X') || (spaces[0][2] == 'X' && spaces[1][2] == 'X' && spaces[2][2] == 'X') || (spaces[0][0] == 'X' && spaces[1][1] == 'X' && spaces[2][2] == 'X') || (spaces[2][0] == 'X' && spaces[1][1] == 'X' && spaces[0][2] == 'X')) {

		std::cout << "Player 1 wins!\n";
		return true;

	}

	if ((spaces[0][0] == 'O' && spaces[0][1] == 'O' && spaces[0][2] == 'O') || (spaces[1][0] == 'O' && spaces[1][1] == 'O' && spaces[1][2] == 'O') || (spaces[2][0] == 'O' && spaces[2][1] == 'O' && spaces[2][2] == 'O') || (spaces[0][0] == 'O' && spaces[1][0] == 'O' && spaces[2][0] == 'O') || (spaces[0][1] == 'O' && spaces[1][1] == 'O' && spaces[2][1] == 'O') || (spaces[0][2] == 'O' && spaces[1][2] == 'O' && spaces[2][2] == 'O') || (spaces[0][0] == 'O' && spaces[1][1] == 'O' && spaces[2][2] == 'O') || (spaces[2][0] == 'O' && spaces[1][1] == 'O' && spaces[0][2] == 'O')) {

		std::cout << "Player 2 wins!\n";
		return true;

	}

	return false;

}

// Call this after checking for game-winning clauses
// If the board is full and no clauses for winning were satisfied, declare a tie
bool checkTie() {

	int c = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			if (occupied[i][j] == true) {

				c++;

			}

		}
	}

	if (c == 9) {

		std::cout << "It's a tie!\n";
		return true;

	}
	else {

		return false;

	}

}
