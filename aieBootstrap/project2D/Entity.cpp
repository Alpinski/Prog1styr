#include "Entity.h"
#include "Vector2.h"


Entity::Entity()
{
	m_Collider.m_TL = Vector2(-30, -30);
	m_Collider.m_BR = Vector2(30, 30);
}


Entity::~Entity(){}

Collider& Entity::GetCollider()
{
	return m_Collider;
}


Vector2 Entity::GetPosition()
{
	return pos;
}