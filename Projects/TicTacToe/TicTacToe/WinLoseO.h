#pragma once
class WinLoseO
{
public:
	WinLoseO();
	~WinLoseO();
	void CheckWinO(char square[3][3]);
protected:
	bool Win = false;
};

