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
#include "Blocker.h"

class Turret : public Entity
{
public:
	//--------------------------------------------------
	//Default constructor
	//Creates the Shield and sets it as child to Player and parent to blocker
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	Turret();
	//--------------------------------------------------
	//Default destructor
	//Deletes the shield
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	~Turret();

	aie::Texture*		m_shield;
	//--------------------------------------------------
	//Updates the shield rotations and postion
	//
	//Parameters:
	//			Takes in a float
	//Returns:
	//		None
	//--------------------------------------------------
	void Update(float deltaTime);
	//--------------------------------------------------
	//Draws the shield
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

	Blocker*		m_blocker;
};

