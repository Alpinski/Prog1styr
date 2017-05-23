#pragma once
#include "Turret.h"
#include "Application.h"
#include "Renderer2D.h"
#include "Audio.h"
#include "Player.h"
#include "ResourceManager.h"

class Application2D : public aie::Application {
public:

	Application2D();
	virtual ~Application2D();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Font*			m_font;
	aie::Audio*			m_audio;
	ResourceManager<aie::Texture>*	m_pResourceManager;
	Player*		m_player;
	Texture*	m_backGround;
	float m_cameraX, m_cameraY;
	float m_timer;
};