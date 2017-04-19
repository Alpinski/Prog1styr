#include "Vector2.h"
#include "math.h"

Vector2::Vector2() //2 Dimensional vector constructor
{
	x = 0;
	y = 0;
}

Vector2::Vector2(float x, float y) //Sets the vector
{
	this->x = x;
	this->y = y;
}

Vector2::~Vector2(){}

Vector2 Vector2::operator+(const Vector2& rhs) //Point translated by a vector (addition)
{
	Vector2 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;
	return result;
}

Vector2 Vector2::operator-(const Vector2& rhs) //Point translated by a vector (subtraction)
{
	Vector2 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	return result;
}

Vector2 Vector2::operator*(const float rhs) //Vector scale without scalar input
{
	Vector2 result;
	result.x = x * rhs;
	result.y = y * rhs;
	return result;
}

Vector2 operator*(float lhs, const Vector2 rhs) //Vector scale with scalar input
{
	Vector2 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
	return result;
}

Vector2 Vector2::operator/(const float rhs) //Vector division
{
	Vector2 result;
	result.x = x / rhs;
	result.y = y / rhs;
	return result;
}

Vector2 Vector2::operator-() //Uniary negative
{
	Vector2 result;
	result.x = -x;
	result.y = -y;
	return result;
}

float Vector2::dot(Vector2 rhs)
{
	float result;
	result= x * rhs.x + y * rhs.y;
	return result;
}

float Vector2::magnitude()
{
	return sqrtf((x * x) + (y * y));
}

float Vector2::magnitude(Vector2 rhs)
{
	return sqrtf((rhs.x * rhs.x) + (rhs.y * rhs.y));
}

void Vector2::normalise()
{
	float length = magnitude();
	if (length != 0)
	{
		x /= length;
		y /= length;
	}
}