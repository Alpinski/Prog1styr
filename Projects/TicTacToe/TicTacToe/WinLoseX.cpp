#include <iostream>
#include "WinLoseX.h"

using namespace std;

WinLoseX::WinLoseX()
{
}


WinLoseX::~WinLoseX()
{
}

void WinLoseX::CheckWinX(char square[3][3])
{
		if (square[0][0] == square[0][1] && square[0][1] == square[0][2])
		{
			Win = true;
			cout << "Player1" << endl;
			cout << "Winner!" << endl;
		}
		else if (square[1][0] == square[1][1] && square[1][1] == square[1][2])
		{
			Win = true;
			cout << "Player1" << endl;
			cout << "Winner!" << endl;
		}
		else if (square[2][0] == square[2][1] && square[2][1] == square[2][2])
		{
			Win = true;
			cout << "Player1" << endl;
			cout << "Winner!" << endl;
		}
		else if (square[0][0] == square[1][0] && square[1][0] == square[2][0])
		{
			Win = true;
			cout << "Player1" << endl;
			cout << "Winner!" << endl;
		}
		else if (square[0][1] == square[1][1] && square[1][1] == square[2][1])
		{
			Win = true;
			cout << "Player1" << endl;
			cout << "Winner!" << endl;
		}
		else if (square[0][2] == square[1][2] && square[1][2] == square[2][2])
		{
			Win = true;
			cout << "Player1" << endl;
			cout << "Winner!" << endl;
		}
		else if (square[0][0] == square[1][1] && square[1][1] == square[2][2])
		{
			Win = true;
			cout << "Player1" << endl;
			cout << "Winner!" << endl;
		}
		else if (square[0][2] == square[1][1] && square[1][1] == square[2][0])
		{
			Win = true;
			cout << "Player1" << endl;
			cout << "Winner!" << endl;
		}
}
