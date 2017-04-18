#include <iostream>
#include "CollisionManager.h"

CollisionManager* CollisionManager::m_instance = nullptr;


CollisionManager::CollisionManager()
{
}


CollisionManager::~CollisionManager()
{
}


CollisionManager* CollisionManager::GetInstance()
{
	
	
		return m_instance;
	
}

void CollisionManager::Create()
{
	if (m_instance == nullptr) 
	{
		m_instance = new CollisionManager();
	}
}

void CollisionManager::Destroy()
{
	delete m_instance;
}

void CollisionManager::AddObject(Entity * pObject)
{
	m_CollisionList.push_back(pObject);
}

void CollisionManager::RomveObject(Entity * pObject)
{
	auto iter = std::find(m_CollisionList.begin(), m_CollisionList.end(), pObject);
	if (iter != m_CollisionList.end())
	{
		m_CollisionList.erase(iter);
	}
}

bool CollisionManager::TestCollision(Entity * pObject)
{
	for (int i = 0; i < m_CollisionList.size(); ++i)
	{
		if (pObject == m_CollisionList[i])
		{
			continue;
		}
	}

	return false;
}
