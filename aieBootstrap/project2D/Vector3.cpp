#include "Vector3.h"
#include "math.h"

Vector3::Vector3() //3 Dimensional vector constructor
{
	x = 0;
	y = 0;
	z = 0;
}

Vector3::Vector3(float x, float y, float z) //Sets the vector
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3::~Vector3() {}

Vector3 Vector3::operator+(const Vector3& rhs) //Point translated by a vector (addition)
{
	Vector3 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;
	result.z = z + rhs.z;
	return result;
}

Vector3 Vector3::operator-(const Vector3& rhs) //Point translated by a vector (subtraction)
{
	Vector3 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;
	return result;
}

Vector3 Vector3::operator*(const float rhs) //Vector scale without scalar input
{
	Vector3 result;
	result.x = x * rhs;
	result.y = y * rhs;
	result.z = z * rhs;
	return result;
}

Vector3 operator*(float lhs, const Vector3 rhs) //Vector scale with scalar input
{
	Vector3 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
	result.z = lhs * rhs.z;
	return result;
}

Vector3 Vector3::operator/(const float rhs) //Vector division
{
	Vector3 result;
	result.x = x / rhs;
	result.y = y / rhs;
	result.z = z / rhs;
	return result;
}

Vector3 Vector3::operator-() //Uniary negative
{
	Vector3 result;
	result.x = -x;
	result.y = -y;
	result.z = -z;
	return result;
}

float Vector3::dot(Vector3 rhs)
{
	float result;
	result = x * rhs.x + y * rhs.y + z * rhs.z;
	return result;
}

Vector3 Vector3::cross(Vector3 rhs)
{
	Vector3 result;
	result.x = y * rhs.z - z * rhs.y;
	result.y = z * rhs.x - x * rhs.z;
	result.z = x * rhs.y - y * rhs.x;
	return result;
}

float Vector3::magnitude()
{
	return sqrtf((x * x) + (y * y) + (z * z));
}

float Vector3::magnitude(Vector3 rhs)
{
	return sqrtf((rhs.x * rhs.x) + (rhs.y * rhs.y) + (rhs.z * rhs.z));
}

void Vector3::normalise()
{
	float length = magnitude();
	if (length != 0)
	{
		x /= length;
		y /= length;
		z /= length;
	}
}