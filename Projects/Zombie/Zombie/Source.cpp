#include <iostream>
#include "Game.h"
#include <time.h>


void main()
{
	srand((int)time(0));

	//create Game
	Game* pGame = new Game(10);
	
	while (pGame->Update())
	{}








	//delete game so no mem leaks
	delete pGame;

	system("pause");
}