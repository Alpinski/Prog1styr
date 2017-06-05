#include "Blocker.h"
#include <cmath>
#include <iostream>
#include "Input.h"

//--------------------------------------------------
//Default constructor
//Creates the Blocker
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
Blocker::Blocker()
{
	m_blocker = new Texture("./textures/Blocker.png");
	Speed = 1000.0f;
	rotSpeed = 10.0f;

}
//--------------------------------------------------
//Default destructor
//Deletes the asteroid
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
Blocker::~Blocker()
{
	delete m_blocker;
}
//--------------------------------------------------
//Updates the Blocker
//
//Parameters:
//			Takes in a float
//Returns:
//		None
//--------------------------------------------------
void Blocker::Update(float deltaTime)
{

	Input* input = Input::getInstance();
	Vector2 Rotation;
	Vector2 Direction;
	Direction = Vector2(0, 0);

	if (input->isKeyDown(INPUT_KEY_UP))
	{
		Rotation.x += rotSpeed * deltaTime;
	}
	if (input->isKeyDown(INPUT_KEY_DOWN))
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
//--------------------------------------------------
//Draws the Blocker
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
void Blocker::Draw(aie::Renderer2D * m_2dRenderer)
{
	m_2dRenderer->drawSpriteTransformed3x3(m_blocker, m_globalMatrix, 50, 50);
}