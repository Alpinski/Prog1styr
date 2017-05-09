#include "Player.h"
#include <math.h>
#include <iostream>
#include "Matrix2.h"
#include "Matrix3.h"
#include "Matrix4.h"
#include "CollisionManager.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Input.h"


Player::Player()
{
	m_shipTexture = new Texture("./textures/ship.png");
	Speed = 1000.0f;
	rotSpeed = 10.0f;
	Mass = 10.0f;
	drag = 555.0f;
}


Player::~Player()
{
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
}

void Player::Draw(aie::Renderer2D * m_2dRenderer)
{
	//m_2dRenderer->setCameraPos(m_globalMatrix.m[1][2] - 640, m_globalMatrix.m[2][0] - 360);
	m_2dRenderer->drawSpriteTransformed3x3(m_shipTexture, m_globalMatrix);
}