#include "Vector3.h"

Vector3::Vector3()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

Vector3::Vector3(float newX, float newY, float newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}


Vector3::~Vector3()
{
}

Vector3 Vector3::Translate(const Vector3& rhs)
{
	Vector3 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;
	result.z = z + rhs.z;

	return result;
}

Vector3 Vector3::Add(const Vector3& rhs)
{
	return Translate(rhs);
	
}

Vector3 Vector3::Subtract(const Vector3& rhs)
{
	Vector3 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;

	return result;
}

Vector3 Vector3::Scale(float scalar)
{
	Vector3 result;
	result.x = x * scalar;
	result.y = y * scalar;
	result.z = z * scalar;

	return result;
}

Vector3 Vector3::Multiply(float scalar)
{
	return Scale(scalar);

}

Vector3 Vector3::Divide(float scalar)
{
	Vector3 result;
	result.x = x / scalar;
	result.y = y / scalar;
	result.z = z / scalar;

	return result;
}