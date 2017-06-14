#include "LoadState.h"
#include <iostream>
#include "Input.h"
#include "ResourceManager.h"


using namespace std;

LoadState::LoadState()
{
}

LoadState::~LoadState()
{
}

void LoadState::OnEnter()
{
	cout << "Loading....." << endl;

	for (int i = 0; i < 500; ++i)
	{
		if (i == 500)
		{
			cout << "loading finito" << endl;
		}	
	}
	
}

void LoadState::OnUpdate(float fDeltaTime, StateMachine * pMachine)
{
	Input* input = Input::getInstance();

	if (input->isKeyDown(INPUT_KEY_ENTER))
	{
		system("cls");
	}
}

void LoadState::OnDraw(Renderer2D * m_2dRenderer)
{
	
}

void LoadState::OnExit()
{
}
