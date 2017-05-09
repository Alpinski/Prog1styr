#include "Entity.h"
#include "Vector2.h"


Entity::Entity()
{
	m_Collider.m_TL = Vector2(-30, -30);
	m_Collider.m_BR = Vector2(30, 30);
	m_Parent = nullptr;
}


Entity::~Entity(){}

void Entity::SetParent(Entity * sParent)
{
}

void Entity::SetChild(Entity * sChild)
{
}

Collider& Entity::GetCollider()
{
	return m_Collider;
}

void Entity::Update()
{
}

void Entity::Draw(aie::Renderer2D* m_2dRenderer)
{

}

void Entity::transform()
{
	if (m_Parent != nullptr)
		m_globalMatrix = m_Parent->m_globalMatrix * m_localMatrix;
	else
		m_globalMatrix = m_localMatrix;
	for (auto child : m_Child)
		child->transform();
}

Vector2 Entity::GetPosition()
{
	Vector2 Pos;
	Pos.x = m_globalMatrix[2][0];
	Pos.y = m_globalMatrix[2][1];
	return Pos;
}