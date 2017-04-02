#include <iostream>
#include "Board.h"

using namespace std;


Board::Board()
{	
}


Board::~Board()
{
}

void Board::PlayField(int ScoreX, int ScoreO)
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

	cout << endl;

	cout << "PlayerX: " << ScoreX<< "				" << "Player0: " << ScoreO << endl;;


}

void Board::Reset()
{
	for (int i = 0; i < 9; ++i)
	{
		int a = i / 3;
		int b = i % 3;

		square[a][b] = '0' + i + 1;
	}
}