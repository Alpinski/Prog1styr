#pragma once
#include "Collider.h"
#include "Vector2.h"

class Entity
{
public:
	Entity();
	~Entity();

	Collider& GetCollider();
	Vector2 GetPosition();

protected:
	Collider m_Collider;
	Vector2 pos;
};

