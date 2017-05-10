#include "Turret.h"
#include <cmath>
#include <iostream>
#include "Input.h"

Turret::Turret()
{
	m_shield = new Texture("./textures/Turret06.png");
	Speed = 1000.0f;
	rotSpeed = 10.0f;
}


Turret::~Turret()
{
	delete m_shield;
}


void Turret::Update(float deltaTime)
{

	Input* input = Input::getInstance();
	Vector2 Rotation;
	Vector2 Direction;
	Direction = Vector2(0, 0);

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

void Turret::Draw(aie::Renderer2D * m_2dRenderer)
{
	m_2dRenderer->setCameraPos(m_globalMatrix[2][0] - 960, m_globalMatrix.m[2][1] - 540);
	m_2dRenderer->drawSpriteTransformed3x3(m_shield, m_globalMatrix, 50, 50);
}