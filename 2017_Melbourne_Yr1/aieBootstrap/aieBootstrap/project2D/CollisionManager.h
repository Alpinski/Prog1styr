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
	void RomveObject(Entity* pObject);

	bool TestCollision(Entity* pObject);

private:
	CollisionManager();
	~CollisionManager();

	static CollisionManager* m_instance;

	std::vector<Entity*> m_CollisionList;
};

