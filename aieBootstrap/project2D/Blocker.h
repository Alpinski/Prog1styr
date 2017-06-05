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
class Blocker : public Entity
{
public:
	//--------------------------------------------------
	//Default constructor
	//Creates the Blocker
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	Blocker();
	//--------------------------------------------------
	//Default destructor
	//Deletes the Blocker
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	~Blocker();

	aie::Texture*		m_blocker;
	//--------------------------------------------------
	//Updates the Blocker
	//
	//Parameters:
	//			Takes in a float
	//Returns:
	//		None
	//--------------------------------------------------
	void Update(float deltaTime);
	//--------------------------------------------------
	//Draws the Blocker
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	void Draw(aie::Renderer2D * m_2dRenderer);
private:
	float Rotation;
	float rotSpeed;
	float Speed;
};

