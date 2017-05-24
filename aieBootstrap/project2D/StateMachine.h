#pragma once
#include "Renderer2D.h"
#include "DynamicArray.h"
#include "BaseState.h"


class StateMachine
{
public:
	StateMachine();
	~StateMachine();


	void Update(float fDeltatime);
	void Draw(Renderer2D* m_2dRenderer);
	void SetState(int nStateIndex);
	void GetState();
};

