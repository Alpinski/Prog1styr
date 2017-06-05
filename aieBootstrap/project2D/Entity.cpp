#include "Entity.h"
#include "Vector2.h"

//--------------------------------------------------
//Default constructor
//base class for objects
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
Entity::Entity()
{
	m_Collider.m_TL = Vector2(-30, -30);
	m_Collider.m_BR = Vector2(30, 30);
	m_Parent = nullptr;
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
Entity::~Entity()
{
}
//--------------------------------------------------
//Sets the parent
//
//Parameters:
//			Takes in an entity parent
//Returns:
//		None
//--------------------------------------------------
void Entity::SetParent(Entity* sParent)
{
	m_Parent = sParent;
}
//--------------------------------------------------
//Sets the child
//
//Parameters:
//			Takes in an entity child
//Returns:
//		None
//--------------------------------------------------
void Entity::SetChild(Entity * sChild)
{
	childList.push_back (sChild);
}
//--------------------------------------------------
//Gets the Position
//
//Parameters:
//			None
//Returns:
//		Returns Position(Pos)
//--------------------------------------------------
Collider& Entity::GetCollider()
{
	return m_Collider;
}
//--------------------------------------------------
//Update function
//
//Parameters:
//			takes in a Renderer2D
//Returns:
//		None
//--------------------------------------------------
void Entity::Update()
{
}
//--------------------------------------------------
//Draw function
//
//Parameters:
//			takes in a Renderer2D
//Returns:
//		None
//--------------------------------------------------
void Entity::Draw(aie::Renderer2D* m_2dRenderer)
{
}
//--------------------------------------------------
//Moves the entity around
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
void Entity::transform()
{
	if (m_Parent != nullptr)
		m_globalMatrix = m_Parent->m_globalMatrix * m_localMatrix;
	else
		m_globalMatrix = m_localMatrix;
	for (auto child : m_Child)
		child->transform();
}
//--------------------------------------------------
//Gets the Position
//
//Parameters:
//			None
//Returns:
//		Returns Position(Pos)
//--------------------------------------------------
Vector2 Entity::GetPosition()
{
	Vector2 Pos;
	Pos.x = m_globalMatrix[2][0] - 960;
	Pos.y = m_globalMatrix[2][1] - 540;

	return Pos;
}