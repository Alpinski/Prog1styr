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



class Player : public Entity
{
public:
	Player();
	~Player();

	aie::Texture*		m_shipTexture;

	void Update(float deltaTime);
	void Draw(aie::Renderer2D * m_2dRenderer);

private:
	float Rotation;
	float rotSpeed;
	float Speed;
	float Mass;
	float drag;
	
};

