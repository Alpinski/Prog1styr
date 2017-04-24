#pragma once
#include "Collider.h"
#include "Vector2.h"
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
	Entity();
	~Entity();

	void SetParent(Entity* sParent);
	void SetChild(Entity* sChild);
	virtual void Update();
	virtual void Draw(aie::Renderer2D*    m_2dRenderer);
	void transform();

	Collider& GetCollider();
	Vector2 GetPosition();

protected:
	aie::Texture*        m_shipTexture;

	Entity* m_Parent;
	std::vector<Entity*> m_Child;

	Matrix3 m_localMatrix;
	Matrix3 m_globalMatrix;
	Vector2 pos;
	Collider m_Collider;
};

