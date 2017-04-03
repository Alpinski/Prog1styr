#include "Vector2.h"
#include <iostream>
#include <math.h>

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

Vector2 Vector2::operatorDiv(const float rhs)
{
	Vector2 result;
	result.x = x / rhs;
	result.y = y / rhs;

	return result;
}

Vector2 Vector2::posOperator()
{
	Vector2 result;
	result.x = +x;
	result.y = +y;

	return result;
}

Vector2 Vector2::operator-()
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

float Vector2::Magnitude()
{
	float result;
	result = sqrt((x*x) + (y*y));
	return result;
}

void Vector2::Normalise()
{
	float length = Magnitude();
	if (length != 0)
	{
		x /= length;
		y /= length;
	}
}

float Vector2::Dot(Vector2 rhs)
{
	float result;
	result = x * rhs.x + y * rhs.y;
	return result;
}