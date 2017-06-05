#pragma once
#include "CollisionManager.h"
#include <math.h>
#include <iostream>
#include "Entity.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Matrix2.h"
#include "Matrix3.h"
#include "Matrix4.h"
#include "Texture.h"
#include "Font.h"
#include "Renderer2D.h"
#include "Turret.h"


class Player : public Entity
{
public:
	//--------------------------------------------------
	//Default constructor
	//Creates the Player and sets it as parent
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	Player();
	//--------------------------------------------------
	//Default destructor
	//Deletes the player
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	~Player();

	aie::Texture*		m_shipTexture;
	//--------------------------------------------------
	//Updates the player movements and collisions
	//
	//Parameters:
	//			Takes in a float
	//Returns:
	//		None
	//--------------------------------------------------
	void Update(float deltaTime);
	//--------------------------------------------------
	//Draws the Player and sets camera postion
	//
	//Parameters:
	//			takes in Renderer2D
	//Returns:
	//		None
	//--------------------------------------------------
	void Draw(aie::Renderer2D * m_2dRenderer);

private:
	float Rotation;
	float rotSpeed;
	float Speed;
	float Mass;
	float drag;

	Turret*		m_shield;
};

