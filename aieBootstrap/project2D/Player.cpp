#include "Player.h"
#include <cmath>
#include <iostream>
#include "Input.h"
#include "Entity.h"
#include "CollisionManager.h"

//--------------------------------------------------
//Default constructor
//Creates the Player
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
Player::Player()
{
	m_shipTexture = new Texture("./textures/spaceship.png");
	//m_Parent->m_shipTexture;

	CollisionManager::GetInstance()->AddObject(this);

	Speed = 1000.0f;
	rotSpeed = 10.0f;
	Mass = 10.0f;
	drag = 555.0f;

	m_shield = new Turret();

	m_shield->SetParent(this);
	SetChild(m_shield);
}
//--------------------------------------------------
//Default destructor
//Deletes the player
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
Player::~Player()
{
	delete m_shield;
	delete m_shipTexture;
}
//--------------------------------------------------
//Updates the player movements and collisions
//
//Parameters:
//			Takes in a float
//Returns:
//		None
//--------------------------------------------------
void Player::Update(float deltaTime)
{
	Vector3 p1pos = m_localMatrix[2];
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

	bool collide = CollisionManager::GetInstance()->TestCollision(this);
	if (collide)
	{
		m_localMatrix[2] = (p1pos);
		std::cout << "crash" << std::endl;
		transform();
	}
}
//--------------------------------------------------
//Draws the Player and sets camera postion
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
void Player::Draw(aie::Renderer2D * m_2dRenderer)
{
	m_2dRenderer->setCameraPos(m_globalMatrix[2][0] - 960, m_globalMatrix.m[2][1] - 540);
	m_2dRenderer->drawSpriteTransformed3x3(m_shipTexture, m_globalMatrix, 100, 150);
	m_shield->Draw(m_2dRenderer);
}