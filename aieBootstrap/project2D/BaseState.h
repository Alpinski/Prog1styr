#pragma once
class BaseState
{
public:
	BaseState();
	~BaseState();

	virtual void onEnter() = 0;
	virtual void onUpdate() = 0;
	virtual void onExit() = 0;

};

