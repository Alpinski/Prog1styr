#include "Zombie.h"
#include <iostream>





Zombie::Zombie()
{
	m_nHealth = (rand() % 51) + 50;
	m_nAttack = (rand() % 11) + 10;

	int nRandOcc = rand() % 10;
	switch (nRandOcc)
	{
		case 0:		m_szOccupation = "Zombie ";				break;
		case 1:		m_szOccupation = "Runner Zombie ";		break;
		case 2:		m_szOccupation = "Walker Zombie ";		break;
		case 3:		m_szOccupation = "Voodoo Zombie ";		break;
		case 4:		m_szOccupation = "Melting Zombie ";		break;
		case 5:		m_szOccupation = "Carrier Zombie ";		break;
		case 6:		m_szOccupation = "Stalker Zombie ";		break;
		case 7:		m_szOccupation = "Radioactive Zombie ";	break;
		case 8:		m_szOccupation = "Spitter Zombie ";		break;
		case 9:		m_szOccupation = "Suicide Zombie ";		break;
	}
}


Zombie::~Zombie()
{
}

void Zombie::SetHealth(int nHealth)
{
	m_nHealth = nHealth;
}
int Zombie::GetHealth()
{
	return m_nHealth;
}
void Zombie::SetAttack(int nAttack)
{
	m_nAttack = nAttack;
}
int Zombie::GetAttack()
{
	return m_nAttack;
}
char* Zombie::GetOccupation()
{
	return m_szOccupation;
}