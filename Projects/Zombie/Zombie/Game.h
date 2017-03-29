#pragma once
#include"Zombie.h"
#include"Vampire.h"

class Game
{
public:
	Game(int nZombieCount, int nVampireCount);
	~Game();

	bool Update();

private:
	Zombie** m_apZombies;
	Vampire** m_apVampires;

	int m_nZombieCount;
	int m_nZombiesLeft;

	int m_nVampireCount;
	int m_nVampiresLeft;
};

