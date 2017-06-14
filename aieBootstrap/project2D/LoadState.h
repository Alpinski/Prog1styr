#include "BaseState.h"
#pragma once
class LoadState : BaseState
{
public:
	LoadState();
	~LoadState();

	void OnEnter();
	void OnUpdate(float fDeltaTime, StateMachine* pMachine);
	void OnDraw(Renderer2D* m_2dRenderer);
	void OnExit();
};

