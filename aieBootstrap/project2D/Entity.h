#pragma once
#include "Collider.h"
#include "Vector2.h"
#include <vector>
#include "Matrix2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Matrix2.h"
#include "matrix3.h"
#include "Matrix4.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include "Renderer2D.h"


using namespace aie;

class Entity
{
public:
	//--------------------------------------------------
	//Default constructor
	//base class for objects
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	Entity();
	//--------------------------------------------------
	//Default destructor
	//Creates the asteroid
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	~Entity();
	//--------------------------------------------------
	//Sets the parent
	//
	//Parameters:
	//			Takes in an entity parent
	//Returns:
	//		None
	//--------------------------------------------------
	void SetParent(Entity* sParent);
	//--------------------------------------------------
	//Sets the child
	//
	//Parameters:
	//			Takes in an entity child
	//Returns:
	//		None
	//--------------------------------------------------
	void SetChild(Entity* sChild);
	//--------------------------------------------------
	//Update function
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	virtual void Update();
	//--------------------------------------------------
	//Draw function
	//
	//Parameters:
	//			takes in a Renderer2D
	//Returns:
	//		None
	//--------------------------------------------------
	virtual void Draw(aie::Renderer2D*    m_2dRenderer);
	//--------------------------------------------------
	//Moves the entity around
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	void transform();
	//--------------------------------------------------
	//Gets the collider
	//
	//Parameters:
	//			None
	//Returns:
	//		Returns m_Collider
	//--------------------------------------------------
	Collider& GetCollider();
	//--------------------------------------------------
	//Gets the Position
	//
	//Parameters:
	//			None
	//Returns:
	//		Returns Position(Pos)
	//--------------------------------------------------
	Vector2 GetPosition();
	std::vector<Entity*>childList;

	

protected:
	aie::Texture*        m_shipTexture;
	aie::Texture*		 m_shield;
	aie::Texture*		 m_blocker;
	aie::Texture*		 m_rock;
	Entity* m_Parent;
	std::vector<Entity*> m_Child;

	Matrix3 m_localMatrix;
	Matrix3 m_globalMatrix;
	
	Vector2 pos;
	Collider m_Collider;
};

