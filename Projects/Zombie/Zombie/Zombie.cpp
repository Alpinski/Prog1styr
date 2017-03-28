#include <iostream>
#include "Zombie.h"




Zombie::Zombie()
{
	m_nHealth = (rand() % 51) + 50;
	m_nAttack = (rand() % 11) + 10;

	int nRandOcc = rand() % 10;
	switch (nRandOcc)
	{
		case 0:		m_szOccupation = "Brain Doctor ";		break;
		case 1:		m_szOccupation = "Beautician ";		break;
		case 2:		m_szOccupation = "Zoologist ";		break;
		case 3:		m_szOccupation = "Student ";		break;
		case 4:		m_szOccupation = "Dentist ";		break;
		case 5:		m_szOccupation = "Dermatologist ";		break;
		case 6:		m_szOccupation = "Fireman ";		break;
		case 7:		m_szOccupation = "Brain Eating Champ ";		break;
		case 8:		m_szOccupation = "Pro Gamer ";		break;
		case 9:		m_szOccupation = "Dead Man ";		break;
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