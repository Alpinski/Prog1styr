#include "Player.h"
#include <math.h>
#include <iostream>
#include "Matrix3.h"
#include "Input.h"


Player::Player()
{
	m_shipTexture = new Texture("./textures/car.png");
}


Player::~Player()
{
	delete m_shipTexture;
}

void Player::Update(float deltaTime)
{
	Input* input = Input::getInstance();
	Vector2 pos;

	//if (input->isKeyDown(INPUT_KEY_W))
	//{
	//	m_V2.velocity += direction * speed * deltaTime;
	//	position += velocity * deltaTime;

	//}

	transform();
}

void Player::Draw(aie::Renderer2D * m_2dRenderer)
{
	m_2dRenderer->drawSprite(m_shipTexture, 25, 25, 100, 100);
	m_2dRenderer->begin();

}