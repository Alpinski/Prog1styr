#include "Vector4.h"
#include "math.h"

Vector4::Vector4() //4 Dimensional vector constructor
{
	x = 0;
	y = 0;
	z = 0;
	w = 0;
}

Vector4::Vector4(float x, float y, float z, float w) //Sets the vector
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

Vector4::~Vector4() {};

Vector4 Vector4::operator+(const Vector4& rhs) //Point translated by a vector (addition)
{
	Vector4 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;
	result.z = z + rhs.z;
	result.w = w + rhs.w;
	return result;
}

Vector4 Vector4::operator-(const Vector4& rhs) //Point translated by a vector (subtraction)
{
	Vector4 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;
	result.w = w - rhs.w;
	return result;
}

Vector4 Vector4::operator*(const float rhs) //Vector scale without scalar input
{
	Vector4 result;
	result.x = x * rhs;
	result.y = y * rhs;
	result.z = z * rhs;
	result.w = w * rhs;
	return result;
}

Vector4 operator*(float lhs, const Vector4 rhs) //Vector scale with scalar input
{
	Vector4 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
	result.z = lhs * rhs.z;
	result.w = lhs * rhs.w;
	return result;
}

Vector4 Vector4::operator/(const float rhs) //Vector division
{
	Vector4 result;
	result.x = x / rhs;
	result.y = y / rhs;
	result.z = z / rhs;
	result.w = w / rhs;
	return result;
}

Vector4 Vector4::operator-() //Uniary negative
{
	Vector4 result;
	result.x = -x;
	result.y = -y;
	result.z = -z;
	result.w = -w;
	return result;
}

float Vector4::dot(Vector4 rhs)
{
	float result;
	result = x * rhs.x + y * rhs.y + z * rhs.z + w * rhs.w;
	return result;
}

Vector4 Vector4::cross(Vector4 rhs)
{
	Vector4 result;
	result.x = y * rhs.z - z * rhs.y;
	result.y = z * rhs.x - x * rhs.z;
	result.z = x * rhs.y - y * rhs.x;
	result.w = 0;
	return result;
}

float Vector4::magnitude()
{
	return sqrtf((x * x) + (y * y) + (z * z) + (w * w));
}

float Vector4::magnitude(Vector4 rhs)
{
	return sqrtf((rhs.x * rhs.x) + (rhs.y * rhs.y) + (rhs.z * rhs.z) + (rhs.w * rhs.w));
}

void Vector4::normalise()
{
	float length = magnitude();
	if (length != 0)
	{
		x /= length;
		y /= length;
		z /= length;
		w /= length;
	}
}