#include <iostream>
#include "WinLoseO.h"

using namespace std;

WinLoseO::WinLoseO()
{
}


WinLoseO::~WinLoseO()
{
}

bool WinLoseO::CheckWinO(char square [3][3])
{
	if (square[0][0] == square[0][1] && square[0][1] == square[0][2])
	{
		cout << "PlayerO is the Winner!" << endl;
		cout << "PlayerX SUX!" << endl;
		++ScoreO;
		return true;
	}
	else if (square[1][0] == square[1][1] && square[1][1] == square[1][2])
	{

		cout << "PlayerO is the Winner!" << endl;
		cout << "PlayerX SUX!" << endl;
		++ScoreO;
		return true;
	}
	else if (square[2][0] == square[2][1] && square[2][1] == square[2][2])
	{
		cout << "PlayerO is the Winner!" << endl;
		cout << "PlayerX SUX!" << endl;
		++ScoreO;
		return true;
	}
	else if (square[0][0] == square[1][0] && square[1][0] == square[2][0])
	{
		cout << "PlayerO is the Winner!" << endl;
		cout << "PlayerX SUX!" << endl;
		++ScoreO;
		return true;
	}
	else if (square[0][1] == square[1][1] && square[1][1] == square[2][1])
	{
		cout << "PlayerO is the Winner!" << endl;
		cout << "PlayerX SUX!" << endl;
		++ScoreO;
		return true;
	}
	else if (square[0][2] == square[1][2] && square[1][2] == square[2][2])
	{
		cout << "PlayerO is the Winner!" << endl;
		cout << "PlayerX SUX!" << endl;
		++ScoreO;
		return true;
	}
	else if (square[0][0] == square[1][1] && square[1][1] == square[2][2])
	{
		cout << "PlayerO is the Winner!" << endl;
		cout << "PlayerX SUX!" << endl;
		++ScoreO;
		return true;
	}
	else if (square[0][2] == square[1][1] && square[1][1] == square[2][0])
	{
		cout << "PlayerO is the Winner!" << endl;
		cout << "PlayerX SUX!" << endl;
		++ScoreO;
		return true;
	}
	else
	{
		return false;
	}
}