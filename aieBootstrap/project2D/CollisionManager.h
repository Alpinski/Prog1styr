#pragma once
#include <vector>
#include "Entity.h"
class CollisionManager
{
public:
	static CollisionManager* GetInstance();
	static void Create();
	static void Destroy();

	void AddObject(Entity* pObject);
	void RemoveObject(Entity* pObject);

	bool TestCollision(Entity* pObject);

private:
	static CollisionManager* m_instance;

	CollisionManager();
	~CollisionManager();

	std::vector<Entity*> m_CollisionList;
};

