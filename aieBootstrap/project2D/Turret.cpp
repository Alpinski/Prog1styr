#include "Turret.h"
#include <cmath>
#include "Input.h"
//--------------------------------------------------
//Default constructor
//Creates the Shield and sets it as child to Player and parent to blocker
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
Turret::Turret()
{
	m_shield = new Texture("./textures/shield.png");
	Speed = 1000.0f;
	rotSpeed = 10.0f;

	m_blocker = new Blocker();

	m_blocker->SetParent(this);
	SetChild(m_blocker);
}
//--------------------------------------------------
//Default destructor
//Deletes the shield
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
Turret::~Turret()
{
	delete m_blocker;
	delete m_shield;
}
//--------------------------------------------------
//Updates the shield rotations and postion
//
//Parameters:
//			Takes in a float
//Returns:
//		None
//--------------------------------------------------
void Turret::Update(float deltaTime)
{

	Input* input = Input::getInstance();
	Vector2 Rotation;
	Vector2 Direction;
	Direction = Vector2(0, 0);

	if (input->isKeyDown(INPUT_KEY_LEFT))
	{
		Rotation.x += rotSpeed * deltaTime;
	}
	if (input->isKeyDown(INPUT_KEY_RIGHT))
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
	m_blocker->Update(deltaTime);
}
//--------------------------------------------------
//Draws the shield
//
//Parameters:
//			takes in Renderer2D
//Returns:
//		None
//--------------------------------------------------
void Turret::Draw(aie::Renderer2D * m_2dRenderer)
{
	m_2dRenderer->drawSpriteTransformed3x3(m_shield, m_globalMatrix, 200, 200);
	m_blocker->Draw(m_2dRenderer);
}