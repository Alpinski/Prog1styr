#include <iostream>
#include "Board.h"
#include "PlayerX.h"
#include "PlayerO.h"
#include "WinLoseX.h"
#include "WinLoseO.h"


using namespace std;

void main()
{
	WinLoseX WLX;
	WinLoseO WLO;
	Board GB;
	PlayerX XT;
	PlayerO OT;

	char input;

	bool gameRunning = true;
	while (gameRunning)
	{
		cout << "Do you want to play TicTacToe?" << endl;
		cout << "(Y) or (N)" << endl;
		cin >> input;
		if (input == 'Y' || input == 'y')
		{
			while (input == 'Y' || input == 'y')
			{
				GB.PlayField();
				XT.PlayerXMark(GB.square);
				GB.PlayField();
				WLX.CheckWinX(GB.square);
				OT.PlayerOMark(GB.square);
				GB.PlayField();
				WLO.CheckWinO(GB.square);
			}
		}
		else if (input == 'N' || input == 'n')
		{
			cout << "fail" << endl;
		}
	}
	system("Pause");
}
