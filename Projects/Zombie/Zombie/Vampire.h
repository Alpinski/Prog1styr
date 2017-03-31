#pragma once
class Vampire
{
public:
	Vampire();
	~Vampire();
	void SetHealth(int nHealth);
	int GetHealth();

	void SetAttack(int nAttack);
	int GetAttack();

	char* GetOccupation();

	void LifeSteal();

private:

	int m_nVHealth;
	int m_nVAttack;
	char* m_svOccupation;
};

