#include <iostream>
#include <time.h>

using namespace std;
void playeGuessing();
int binarySearch();
void aiGuessing();



void main()
{

	aiGuessing();

	system("pause");
}

void aiGuessing()
{
	srand((int)time(0));

	bool gameRunning = true;


	while (gameRunning)
	{	
		int guess = rand() % 100;
		int Lives = 0;
		int min = 1;
		int max = 100;
		int input;

		bool guessing = true;
		while (guessing)
		{
		
			cout << "think a number" << endl;

			cout << "is this your number  " << guess << endl;

			cout << "if not type 1: or 2:." << "if yes type 3:" << endl;

			cin >> input;
			switch (input)
			{
			case 1:
				system("cls");
				min = guess;
				guess = (min + max) / 2;
				break;
			case 2:
				system("cls");
				max = guess;
				guess = (min + max) / 2;
				break;
			case 3:
				system("cls");
				cout << "You Lose!" << endl;
				break;
			default:
				cout << "Invalid Input!" << endl;
				break;
			}
		}
	}
}

void playeGuessing()
{
	srand((int)time(0));
	int Num = rand() % 100;
	int Guess = -1;
	int Lives = 0;

	while (Guess != Num)
	{
		
		cin >> Guess;
		if (Guess < Num)
		{
			
			cout << "Go Higher!" << endl;
			++Lives;
		}
		else if (Guess > Num)
		{
			cout << "Go Lower!" << endl;
			++Lives;		
		}
		else
		{
			cout << "You are correct!!!" << endl;
			for (int i = 0; i < 100000; ++i)
			{
				cout << "WINNER!!!" << endl;
			}
		}
		if (Lives == 5)
		{
			cout << "GAMEOVER!!!" << endl;
			
		}

	}
}

int binarySearch()
{
	int Num = rand() % 1000;

	int min = 1;
	int max = 1000;
	int half = 2;
	int guess = 5;

	max = guess;
	guess = (max + min) % half;

	cout << guess << endl;
	
	return guess;
}