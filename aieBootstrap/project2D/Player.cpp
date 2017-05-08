#include "Player.h"
#include <math.h>
#include <iostream>
#include "Matrix3.h"


Player::Player()
{
	m_shipTexture = new Texture("./textures/car.png");
}


Player::~Player()
{
	delete m_shipTexture;
}

//void Player::Update(Physics* pPhysics, float deltaTime)
//{
//	input* input = input::getInstance();
//	vector2 pos;
//
//	if (input->isKeyDown(INPUT_KEY_W))
//	{
//		m_V2.velocity += direction * speed * deltaTime;
//		position += velocity * deltaTime;
//
//	}
//}

void Player::Draw(aie::Renderer2D * m_2dRenderer)
{
	m_2dRenderer->drawSprite(m_shipTexture, 25, 25, 100, 100);

}