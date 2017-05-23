#include "Player.h"
#include <cmath>
#include <iostream>
#include "Input.h"
#include "Entity.h"


Player::Player()
{
	m_shipTexture = new Texture("./textures/ship.png");
	//m_Parent->m_shipTexture;

	Speed = 1000.0f;
	rotSpeed = 10.0f;
	Mass = 10.0f;
	drag = 555.0f;

	m_shield = new Turret();

	m_shield->SetParent(this);
	SetChild(m_shield);
}


Player::~Player()
{
	delete m_shield;
	delete m_shipTexture;
}

void Player::Update(float deltaTime)
{
	
	Input* input = Input::getInstance();
	Vector2 Rotation;
	Vector2 Direction;
	Direction = Vector2(0, 0);

	if (input->isKeyDown(INPUT_KEY_W))
	{
		Direction.y += Speed * deltaTime;	
	}
	if (input->isKeyDown(INPUT_KEY_S))
	{
		Direction.y -= Speed * deltaTime;
	}
	if (input->isKeyDown(INPUT_KEY_A))
	{
		Rotation.x += rotSpeed * deltaTime;
	}
	if (input->isKeyDown(INPUT_KEY_D))
	{
		Rotation.x -= rotSpeed *deltaTime;
	}

	Matrix3 PlayerPos;
	PlayerPos.setPosition(Direction);
	m_localMatrix = m_localMatrix * PlayerPos;

	Matrix3 PlayerRot;
	PlayerRot.setRotationZ(Rotation.x);
	m_localMatrix = m_localMatrix * PlayerRot;

	transform();
	m_shield->Update(deltaTime);
}

void Player::Draw(aie::Renderer2D * m_2dRenderer)
{
	m_2dRenderer->setCameraPos(m_globalMatrix[2][0] - 960, m_globalMatrix.m[2][1] - 540);
	m_2dRenderer->drawSpriteTransformed3x3(m_shipTexture, m_globalMatrix, 200, 200);
	m_shield->Draw(m_2dRenderer);
}