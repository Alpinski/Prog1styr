#pragma once
#include <vector>
#include "Entity.h"
class CollisionManager
{
public:
	static CollisionManager* GetInstance();
	//--------------------------------------------------
	//Creates the collision manager
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	static void Create();
	//--------------------------------------------------
	//deletes the collision manager
	//
	//Parameters:
	//			None
	//Returns:
	//		None
	//--------------------------------------------------
	static void Destroy();
	//--------------------------------------------------
	//Adds and object to the collision list
	//
	//Parameters:
	//			Takes in an entity object
	//Returns:
	//		None
	//--------------------------------------------------
	void AddObject(Entity* pObject);
	//--------------------------------------------------
	//Removes an object from the collision list
	//
	//Parameters:
	//			Takes in an entity object
	//Returns:
	//		None
	//--------------------------------------------------
	void RemoveObject(Entity* pObject);
	//--------------------------------------------------
	//Tests if the collision works
	//
	//Parameters:
	//			Takes in an entity object
	//Returns:
	//		Returns true or false depending on if collision worked or not
	//--------------------------------------------------
	bool TestCollision(Entity* pObject);

private:
	static CollisionManager* m_instance;

	CollisionManager();
	~CollisionManager();

	std::vector<Entity*> m_CollisionList;
};

