#pragma once
class Board
{
public:
	char square[3][3] = { '1','2','3','4','5','6','7','8','9' };
	void PlayField();

	Board();
	~Board();
};

