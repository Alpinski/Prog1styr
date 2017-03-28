#include <iostream>
#include "PlayerX.h"
#include"Board.h"
using namespace std;

PlayerX::PlayerX()
{
}


PlayerX::~PlayerX()
{
}

char PlayerX::PlayerXMark(char square[3][3])
{
	int input;
	
	PlayerX Xmark;
	Board GB;
	
	cin >> input;

	
	// CHECK IF THE MOVE WAS VALID AND REPLACE WITH APPROPRIATE MARK
	if (input == 1 && square[0][0] == '1')
	{
		square[0][0] = 'X';
	}
	else if (input == 2 && square[0][1] == '2')
	{
		square[0][1] = 'X';
	}
	else if (input == 3 && square[0][2] == '3')
	{
		square[0][2] = 'X';
	}
	else if (input == 4 && square[1][0] == '4')
	{
		square[1][0] = 'X';
	}
	else if (input == 5 && square[1][1] == '5')
	{
		square[1][1] = 'X';
	}
	else if (input == 6 && square[1][2] == '6')
	{
		square[1][2] = 'X';
	}
	else if (input == 7 && square[2][0] == '7')
	{
		square[2][0] = 'X';
	}
	else if (input == 8 && square[2][1] == '8')
	{
		square[2][1] = 'X';
	}
	else if (input == 9 && square[2][2] == '9')
	{
		square[2][2] = 'X';
	}
	else
	{
		cout << "Invalid Turn" << endl;
		cin.ignore();
		cin.get();
	}
	//switch (input) 
	//{
	//	case 1:
	//	{
	//		
	//		square[0][0] = 'X';
	//		break;
	//	}
	//	case 2:
	//	{

	//		square[0][1] = 'X';
	//		break;
	//	}
	//	case 3:
	//	{
	//
	//		square[0][2] = 'X';
	//		break;
	//	}
	//	case 4:
	//	{
	//	
	//		square[1][0] = 'X';
	//		break;
	//	}
	//	case 5:
	//	{

	//		square[1][1] = 'X';
	//		break;
	//	}
	//	case 6:
	//	{

	//		square[1][2] = 'X';
	//		break;
	//	}
	//	case 7:
	//	{
	//	
	//		square[2][0] = 'X';
	//		break;
	//	}
	//	case 8:
	//	{
	//	
	//		square[2][1] = 'X';
	//		break;
	//	}
	//	case 9:
	//	{
	//		
	//		square[2][2] = 'X';
	//		break;
	//	}
	//	default:
	//	{
	//		cout << "Invalid Key!" << endl;		
	//		cin.ignore();
	//		cin.get();
	//	}
	//}
	return 'X';
}