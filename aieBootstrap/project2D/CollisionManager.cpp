#include "CollisionManager.h"
#include <iostream>
#include "Collider.h"

using namespace std;

CollisionManager* CollisionManager::m_instance = nullptr;

CollisionManager::CollisionManager(){}
CollisionManager::~CollisionManager(){}

CollisionManager* CollisionManager::GetInstance()
{
	return m_instance;
}
//--------------------------------------------------
//Creates the collision manager
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
void CollisionManager::Create()
{
	if (!m_instance)
	{
		m_instance = new CollisionManager();
	}	
}
//--------------------------------------------------
//deletes the collision manager
//
//Parameters:
//			None
//Returns:
//		None
//--------------------------------------------------
void CollisionManager::Destroy()
{
	delete m_instance;
}
//--------------------------------------------------
//Adds and object to the collision list
//
//Parameters:
//			Takes in an entity object
//Returns:
//		None
//--------------------------------------------------
void CollisionManager::AddObject(Entity* pObject)
{
	m_CollisionList.push_back(pObject);
}
//--------------------------------------------------
//Removes an object from the collision list
//
//Parameters:
//			Takes in an entity object
//Returns:
//		None
//--------------------------------------------------
void CollisionManager::RemoveObject(Entity* pObject)
{
	auto iter = std::find(m_CollisionList.begin(), m_CollisionList.end(), pObject);
	if(iter != m_CollisionList.end())
		m_CollisionList.erase(iter);
}
//--------------------------------------------------
//Tests if the collision works
//
//Parameters:
//			Takes in an entity object
//Returns:
//		Returns true or false depending on if collision worked or not
//--------------------------------------------------
bool CollisionManager::TestCollision(Entity* pObject)
{
	for (unsigned int i = 0; i < m_CollisionList.size(); ++i)
	{
		if (pObject == m_CollisionList[i])
			continue;

		//Calculate AABB of our two objects
		Collider collider1 = pObject->GetCollider();
		collider1.m_TL = collider1.m_TL + pObject->GetPosition();
		collider1.m_BR = collider1.m_BR + pObject->GetPosition();

		Collider collider2 = m_CollisionList[i]->GetCollider();
		collider2.m_TL = collider2.m_TL + m_CollisionList[i]->GetPosition();
		collider2.m_BR = collider2.m_BR + m_CollisionList[i]->GetPosition();

		//Test if two AABB's are overlapping
		if (collider1.m_BR.x > collider2.m_TL.x &&
			collider1.m_BR.y > collider2.m_TL.y &&
			collider1.m_TL.x < collider2.m_BR.x &&
			collider1.m_TL.y < collider2.m_BR.y)
			return true;
	}

	return false;
}
