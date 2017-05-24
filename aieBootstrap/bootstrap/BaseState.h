#include "Renderer2D.h"
using namespace aie;

#pragma once
class BaseState
{
public:
	BaseState();
	~BaseState();

	virtual void onEnter() = 0;
	virtual void onUpdate(float fDeltaTime) = 0;
	virtual void OnDraw(Renderer2D* m_2dRenderer) = 0;
	virtual void onExit() = 0;

};

