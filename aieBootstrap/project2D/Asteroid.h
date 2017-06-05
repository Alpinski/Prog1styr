#pragma once
#include "CollisionManager.h"
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


class Asteroid : public Entity
{
public:
	//--------------------------------------------------
	//Default constructor
	//Creates the asteroid
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	Asteroid();
	//--------------------------------------------------
	//Default destructor
	//Creates the asteroid
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	~Asteroid();


	aie::Texture*		m_rock;
	//--------------------------------------------------
	//updates the asteroid
	//
	//Parameters:
	//			takes in a float
	//Returns:
	//		None
	//--------------------------------------------------
	void Update(float deltaTime);
	//--------------------------------------------------
	//Draws the asteroid
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
	float Mass;
	float drag;
};

