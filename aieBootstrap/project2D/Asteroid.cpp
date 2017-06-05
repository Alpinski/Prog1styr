#include "Asteroid.h"
#include <cmath>
#include <iostream>
#include "Input.h"
#include "Entity.h"
#include "CollisionManager.h"
#include "Matrix3.h"

//--------------------------------------------------
//Default constructor
//Creates the asteroid
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
Asteroid::Asteroid()
{
	m_rock = new Texture("./textures/rock_large.png");

	CollisionManager::GetInstance()->AddObject(this);

	Matrix3 PlayerPos;
	PlayerPos.setPosition(Vector2(400,200));
	m_localMatrix = m_localMatrix * PlayerPos;

	transform();
}
//--------------------------------------------------
//Default destructor
//Creates the asteroid
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
Asteroid::~Asteroid()
{
	delete m_rock;
}
//--------------------------------------------------
//updates the asteroid
//
//Parameters:
//			takes in a float
//Returns:
//		None
//--------------------------------------------------
void Asteroid::Update(float deltaTime)
{
}
//--------------------------------------------------
//Draws the asteroid
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
void Asteroid::Draw(aie::Renderer2D * m_2dRenderer)
{
	m_2dRenderer->drawSpriteTransformed3x3(m_rock, m_globalMatrix);
}