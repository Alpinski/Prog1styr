#include <iostream>
#include "Board.h"

using namespace std;


Board::Board()
{	
}


Board::~Board()
{
}

void Board::PlayField()
{
	system("cls");
	cout << "		         Tic Tac Toe      " << endl;

	cout << "		Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "			   |     |     " << endl;
	cout << " 			" << square[0][0] << "  |  " << square[0][1] << "  |  " << square[0][2] << endl;

	cout << "		      _____|_____|_____" << endl;
	cout << "			   |     |     " << endl;

	cout << " 		        " << square[1][0] << "  |  " << square[1][1] << "  |  " << square[1][2] << endl;

	cout << "		      _____|_____|_____" << endl;
	cout << "			   |     |     " << endl;

	cout << " 			" << square[2][0] << "  |  " << square[2][1] << "  |  " << square[2][2] << endl;

	cout << "			   |     |     " << endl << endl;
}