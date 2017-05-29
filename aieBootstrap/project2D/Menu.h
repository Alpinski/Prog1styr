#pragma once
#include "BaseState.h"


class Menu : public BaseState
{
public:
	Menu();
	virtual ~Menu();

	virtual void onEnter() = 0;
	virtual void onUpdate(float fDeltaTime) = 0;
	virtual void OnDraw(Renderer2D* m_2dRenderer) = 0;
	virtual void onExit() = 0;
};

