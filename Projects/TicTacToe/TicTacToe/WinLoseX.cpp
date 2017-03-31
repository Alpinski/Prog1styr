#include <iostream>
#include "WinLoseX.h"

using namespace std;

WinLoseX::WinLoseX()
{
}


WinLoseX::~WinLoseX()
{
}

bool WinLoseX::CheckWinX(char square[3][3])
{
		if (square[0][0] == square[0][1] && square[0][1] == square[0][2])
		{
			cout << "PlayerX is the Winner!" << endl;
			cout << "PlayerO SUX!" << endl;
			++ScoreX;
			return true;
		}
		else if (square[1][0] == square[1][1] && square[1][1] == square[1][2])
		{
			cout << "PlayerX is the Winner!" << endl;
			cout << "PlayerO SUX!" << endl;
			++ScoreX;
			return true;

		}
		else if (square[2][0] == square[2][1] && square[2][1] == square[2][2])
		{
			cout << "PlayerX is the Winner!" << endl;
			cout << "PlayerO SUX!" << endl;
			++ScoreX;
			return true;
		}
		else if (square[0][0] == square[1][0] && square[1][0] == square[2][0])
		{
			cout << "PlayerX is the Winner!" << endl;
			cout << "PlayerO SUX!" << endl;
			++ScoreX;
			return true;
		}
		else if (square[0][1] == square[1][1] && square[1][1] == square[2][1])
		{
			cout << "PlayerX is the Winner!" << endl;
			cout << "PlayerO SUX!" << endl;
			++ScoreX;
			return true;
		}
		else if (square[0][2] == square[1][2] && square[1][2] == square[2][2])
		{
			cout << "PlayerX is the Winner!" << endl;
			cout << "PlayerO SUX!" << endl;
			++ScoreX;
			return true;
		}
		else if (square[0][0] == square[1][1] && square[1][1] == square[2][2])
		{
			cout << "PlayerX is the Winner!" << endl;
			cout << "PlayerO SUX!" << endl;;
			++ScoreX;
			return true;
		}
		else if (square[0][2] == square[1][1] && square[1][1] == square[2][0])
		{
			cout << "PlayerX is the Winner!" << endl;
			cout << "PlayerO SUX!" << endl;
			++ScoreX;
			return true;
		}
		else
		{
			return false;
		}
}
