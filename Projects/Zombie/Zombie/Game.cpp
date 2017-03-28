#include "Game.h"
#include <iostream>

using namespace std;

Game::Game(int nZombieCount)
{
	m_apZombies = new Zombie*[10];

	for (int i = 0; i < nZombieCount; ++i)
	{
		m_apZombies[i] = new Zombie();
	}

	m_nZombieCount = nZombieCount;
	m_nZombiesLeft = nZombieCount;
}

Game::~Game()
{
	for (int i = 0; i < m_nZombieCount; ++i)
	{
		delete m_apZombies[i];
	}

	delete[] m_apZombies;
}

bool Game::Update()
{
	if (m_nZombiesLeft > 1)
	{
		//fight
		int nRandZombie1 = rand() % m_nZombieCount;
		int nRandZombie2 = rand() % m_nZombieCount;
		
		int nAttack1 = m_apZombies[nRandZombie1]->GetAttack();
		int nAttack2 = m_apZombies[nRandZombie2]->GetAttack();

		int nHealth1 = m_apZombies[nRandZombie1]->GetHealth();
		int nHealth2 = m_apZombies[nRandZombie2]->GetHealth();

		if (nHealth1 > 0 && nHealth2 > 0)
		{
			int nNewHealth1 = nHealth1 - nAttack2;
			int nNewHealth2 = nHealth2 - nAttack1;
			if (nRandZombie1 != nRandZombie2)
			{
				m_apZombies[nRandZombie1]->SetHealth(nNewHealth1);
				m_apZombies[nRandZombie2]->SetHealth(nNewHealth2);

				if (nNewHealth1 <= 0)
					{
						--m_nZombiesLeft;
					}
					if (nNewHealth2 <= 0)
					{
						--m_nZombiesLeft;
					}
		
					cout << "A " << m_apZombies[nRandZombie1]->GetOccupation() << "attacks a " << m_apZombies[nRandZombie2]->GetOccupation();
					cout << "for " << nAttack1 << "damage, it has " << nNewHealth2 << "Heatlth remaining" << endl;

					cout << "A " << m_apZombies[nRandZombie2]->GetOccupation() << "attacks a " << m_apZombies[nRandZombie1]->GetOccupation();
					cout << "for " << nAttack1 << "damage, it has " << nNewHealth2 << "Heatlth remaining" << endl;

					cout << endl;
			}
		}
	}
	else
	{
		//win
		for (int i = 0; i < m_nZombieCount; ++i)
		{
			if (m_apZombies[i]->GetHealth() > 0)
			{
				cout << "A " << m_apZombies[i]->GetOccupation() << " Stands Victorious!!!" << endl << endl;
				return false;
			}
		}
	}


	return true;
}