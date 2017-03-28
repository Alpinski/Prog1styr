#include "Vector2.h"



Vector2::Vector2()
{
	x = 0.0;
	y = 0.0;
}

Vector2::Vector2(float newX, float newY)
{
	x = newX;
	y = newY;
}

Vector2::~Vector2()
{
}

Vector2 Vector2::operator+(const Vector2& rhs)
{
	Vector2 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;

	return result;
}

//Vector2 Vector2::Add(const Vector2& rhs)
//{	
//	return Translate(rhs);
//}

Vector2 Vector2::operator-(const Vector2& rhs)
{
	Vector2 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;

	return result;
}

Vector2 Vector2::operator*(const float rhs)
{
	Vector2 result;
	result.x = x * rhs;
	result.y = y * rhs;

	return result;
}

Vector2 operator*(float lhs, const Vector2 rhs)
{	
	Vector2 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
	return result;
}
//Vector2 Vector2::Multiply(float rhs)
//{
//	return Scalevf(rhs);
//
//}

Vector2 Vector2::operatorDiv(float rhs)
{
	Vector2 result;
	result.x = x / rhs;
	result.y = y / rhs;

	return result;
}

Vector2 Vector2::negOperator()
{
	Vector2 result;
	result.x = -x;
	result.y = -y;

	return result;
}

Vector2 Vector2::operator+= (const Vector2& rhs)
{
	x += rhs.x;
	y += rhs.y;

	return *this;
}


