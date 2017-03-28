#include <iostream>
#include "PlayerO.h"
#include "Board.h"
using namespace std;



PlayerO::PlayerO()
{
}


PlayerO::~PlayerO()
{
}

char PlayerO::PlayerOMark(char square[3][3])
{
	int input;

	PlayerO Omark;
	//Board GB;

	cin >> input;
	
	// CHECK IF THE MOVE WAS VALID AND REPLACE WITH APPROPRIATE MARK
	if (input == 1 && square[0][0] == '1')
	{
		square[0][0] = 'O';
	}
	else if (input == 2 && square[0][1] == '2')
	{
		square[0][1] = 'O';
	}
	else if (input == 3 && square[0][2] == '3')
	{
		square[0][2] = 'O';
	}
	else if (input == 4 && square[1][0] == '4')
	{
		square[1][0] = 'O';
	}
	else if (input == 5 && square[1][1] == '5')
	{
		square[1][1] = 'O';
	}
	else if (input == 6 && square[1][2] == '6')
	{
		square[1][2] = 'O';
	}
	else if (input == 7 && square[2][0] == '7')
	{
		square[2][0] = 'O';
	}
	else if (input == 8 && square[2][1] == '8')
	{
		square[2][1] = 'O';
	}
	else if (input == 9 && square[2][2] == '9')
	{
		square[2][2] = 'O';
	}
	else
	{
		cout << "Invalid Turn" << endl;
		cin.ignore();
		cin.get();
	}


	/*switch (input)
	{
		case 1:
		{
			square[0][0] = 'O';
			break;
		}
		case 2:
		{
			square[0][1] = 'O';
			break;
		}
		case 3:
		{
			square[0][2] = 'O';
			break;
		}
		case 4:
		{
			square[1][0] = 'O';
			break;
		}
		case 5:
		{
			square[1][1] = 'O';
			break;
		}
		case 6:
		{
			
			square[1][2] = 'O';
			break;
		}
		case 7:
		{
			
			square[2][0] = 'O';
			break;
		}
		case 8:
		{
			
			square[2][1] = 'O';
			break;
		}
		case 9:
		{
	
			square[2][2] = 'O';
			break;
		}	
		default:
		{
			cout << "Invalid Key!" << endl;
			cin.ignore();
			cin.get();
		}*/
	//}	
	return 'O';
}