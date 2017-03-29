#include "Vampire.h"
#include <iostream>

Vampire::Vampire()
{
	m_nVHealth = (rand() % 51) + 50;
	m_nVAttack = (rand() % 11) + 10;

	int nRandOcc = rand() % 10;
	switch (nRandOcc)
	{
	case 0:		m_svOccupation = "Immortal Vampire ";	break;
	case 1:		m_svOccupation = "Bat Vampire ";		break;
	case 2:		m_svOccupation = "Noble Vampire ";		break;
	case 3:		m_svOccupation = "Nosferatu ";		break;
	case 4:		m_svOccupation = "Reptile Vampire ";		break;
	case 5:		m_svOccupation = "Mortal Vampire ";	break;
	case 6:		m_svOccupation = "Psi Vampires ";		break;
	case 7:		m_svOccupation = "Demon Vampire ";			break;
	case 8:		m_svOccupation = "Vampire Lord ";		break;
	case 9:		m_svOccupation = "VampireMan ";		break;
	}
}


Vampire::~Vampire()
{
}

void Vampire::SetHealth(int nHealth)
{
	m_nVHealth = nHealth;
}
int Vampire::GetHealth()
{
	return m_nVHealth;
}
void Vampire::SetAttack(int nAttack)
{
	m_nVAttack = nAttack;
	if (nAttack)
	{
		m_nLifesteal + m_nVHealth;
	}
}
int Vampire::GetAttack()
{
	return m_nVAttack;
}
char* Vampire::GetOccupation()
{
	return m_svOccupation;
}

void Vampire::LifeSteal(int nLifeSteal)
{
	m_nLifesteal = nLifeSteal;
	nLifeSteal = (rand() % 3) + 5;
}