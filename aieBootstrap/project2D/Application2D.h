#pragma once
#include "Turret.h"
#include "Application.h"
#include "Renderer2D.h"
#include "Audio.h"
#include "Player.h"
#include "Blocker.h"
#include "Asteroid.h"

class Application2D : public aie::Application {
public:

	Application2D();
	virtual ~Application2D();

	//--------------------------------------------------
	//runs all the functions inside and creates the player, rock,etc

	//Parameters:
	//			None
	//Returns:
	//		Returns a bool true/false
	//--------------------------------------------------
	virtual bool startup();
	//--------------------------------------------------
	//Deletes everything that was created
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	virtual void shutdown();
	//--------------------------------------------------
	//Update function for the player and rock
	//
	//Parameters:
	//			takes in a float
	//Returns:
	//		None
	//--------------------------------------------------
	virtual void update(float deltaTime);
	//--------------------------------------------------
	//main draw function starts the rendere and ends it
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Font*			m_font;
	aie::Audio*			m_audio;
	Asteroid*			m_rock;
	Blocker*			m_blocker;
	Player*				m_player;
	Texture*			m_backGround;

	float m_cameraX, m_cameraY;
	float m_timer;
};