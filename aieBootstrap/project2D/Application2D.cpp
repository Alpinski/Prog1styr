#include "Application2D.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include "StateMachine.h"
#include "LoadState.h"

using namespace aie;

Application2D::Application2D() 
{
}

Application2D::~Application2D() 
{
}
//--------------------------------------------------
//runs all the functions inside and creates the player, rock,etc
//
//Parameters:
//			None
//Returns:
//		Returns a bool true/false
//--------------------------------------------------
bool Application2D::startup() 
{
	CollisionManager::Create();

	m_2dRenderer = new Renderer2D();

	m_rock = new Asteroid();

	m_blocker = new Blocker();

	m_player = new Player();

	m_backGround = new Texture("./textures/starfield.png");

	m_font = new Font("./font/consolas.ttf", 32);

	m_audio = new Audio("./audio/powerup.wav");

	m_cameraX = 0;
	m_cameraY = 0;
	m_timer = 0;

	m_LoadState->OnEnter();
	m_LoadState->OnUpdate(0,0);
	m_LoadState->OnDraw(0);
	m_LoadState->OnExit();


	return true;
}
//--------------------------------------------------
//Deletes everything that was created
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
void Application2D::shutdown() 
{
	delete m_blocker;
	delete m_backGround;
	delete m_audio;
	delete m_font;
	delete m_player;
	delete m_2dRenderer;
	CollisionManager::Destroy();
}
//--------------------------------------------------
//Update function for the player and rock
//
//Parameters:
//			takes in a float
//Returns:
//		None
//--------------------------------------------------
void Application2D::update(float deltaTime) 
{
	m_timer += deltaTime;

	m_StateMachine->Update(deltaTime, 0);
	m_player->Update(deltaTime);
	m_rock->Update(deltaTime);
}
//--------------------------------------------------
//main draw function starts the rendere and ends it
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
void Application2D::draw() 
{
	// wipe the screen to the background colour
	clearScreen();

	// set the camera position before we begin rendering
	//m_2dRenderer->setCameraPos(m_cameraX, m_cameraY);
	//m_2dRenderer->setRenderColour(1, 0, 1, 1);
	

	// begin drawing sprites
	m_2dRenderer->begin();
	m_2dRenderer->drawSprite(m_backGround, 0,0);
	m_player->Draw(m_2dRenderer);
	m_rock->Draw(m_2dRenderer);


	// demonstrate spinning sprite
	m_2dRenderer->setUVRect(0,0,1,1);
	
	// output some text, uses the last used colour
	char fps[32];
	sprintf_s(fps, 32, "FPS: %i", getFPS());
	m_2dRenderer->drawText(m_font, fps, 0, 720 - 32);
	m_2dRenderer->drawText(m_font, "Press Space for sound!", 0, 720 - 64);

	// done drawing sprites
	m_2dRenderer->end();
}