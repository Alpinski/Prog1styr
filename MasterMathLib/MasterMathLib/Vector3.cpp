#include "Vector3.h"
#define _USE_MATH_DEFINES
#include <cmath>
//--------------------------------------------------------------------------------------
//Constructor
//--------------------------------------------------------------------------------------
Vector3::Vector3()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}
//--------------------------------------------------------------------------------------
//Constructor
//--------------------------------------------------------------------------------------
Vector3::Vector3(float newX, float newY, float newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}
//--------------------------------------------------------------------------------------
//Deconstructor
//--------------------------------------------------------------------------------------
Vector3::~Vector3()
{
}
//--------------------------------------------------------------------------------------
// Adds two vector3s together
//
// Param:
//		takes in a vector3
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::operator+(const Vector3& rhs)
{
	Vector3 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;
	result.z = z + rhs.z;

	return result;
}
//--------------------------------------------------------------------------------------
// Subtracts two vector4s together
//
// Param:
//		takes in a vector4 
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::operator-(const Vector3& rhs)
{
	Vector3 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;

	return result;
}
//--------------------------------------------------------------------------------------
// times two vector4s together
//
// Param:
//		takes in a vector4 
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::operator*(const float rhs)
{
	Vector3 result;
	result.x = x * rhs;
	result.y = y * rhs;
	result.z = z * rhs;

	return result;
}
//--------------------------------------------------------------------------------------
// times a float and a vector4 together
//
// Param:
//		takes in a vector4 
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 operator*(float lhs, const Vector3& rhs)
{
	Vector3 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
	result.z = lhs * rhs.z;
	return result;
}
//--------------------------------------------------------------------------------------
// takes two equal-length sequences of numbers and returns a single number.
//
// Param:
//		takes in a vector4 
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
float Vector3::Dot(Vector3& rhs)
{
	float result;
	result = x * rhs.x + y * rhs.y + z * rhs.z;
	return result;
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number is greater than the other number
//
// Param:
//		input: takes a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector3::operator> (const Vector3& rhs)
{
	return(x > rhs.x && y > rhs.y && z > rhs.z);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number is less than the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector3::operator< (const Vector3& rhs)
{
	return(x < rhs.x && y < rhs.y && z < rhs.z);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number is equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector3::operator==(const Vector3& rhs)
{
	return(x == rhs.x && y == rhs.y && z == rhs.z);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number does not equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector3::operator!=(const Vector3& rhs)
{
	return(x != rhs.x && y != rhs.y && z != rhs.z);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number greater than or equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector3::operator<=(const Vector3& rhs)
{
	return(x <= rhs.x && y <= rhs.y && z <= rhs.z);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number less than or equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector3::operator>=(const Vector3& rhs)
{
	return(x >= rhs.x && y >= rhs.y && z >= rhs.z);
}
//--------------------------------------------------------------------------------------
//the cross product is a 
//
// Param:
//		takes in a vector4 
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::Cross(Vector3& rhs)
{
	Vector3 result;
	result.x = y * rhs.z - z * rhs.y;
	result.y = z * rhs.x - x * rhs.z;
	result.z = x * rhs.y - y * rhs.x;
	return result;
}
//--------------------------------------------------------------------------------------
//How large an object is
//
// Param:
//		none
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
float Vector3::Magnitude()
{
	float result;
	result = sqrtf((x*x) + (y*y) + (z*z));
	return result;
}
//--------------------------------------------------------------------------------------
//square of a magnitude
//
// Param:
//		none
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
float Vector3::sqrMagnitude()
{
	float result;
	result = (x*x) + (y*y) + (z*z);
	return result;
}
//--------------------------------------------------------------------------------------
////multiply by a factor that makes an integral equal to a desired value

//
// Param:
//		Takes in a Vector4
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
void Vector3::Normalise()
{
	float length = Magnitude();
	if (length != 0)
	{
		x /= length;
		y /= length;
		z /= length;
	}
}
//--------------------------------------------------------------------------------------
//normalise the magnitude
//
// Param:
//		Takes in a Vector4
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::Normalised(Vector3& data)
{
	Vector3 result;
	float Mag = data.Magnitude();
	if (!Mag == 0)
	{
		result.x = x / Mag;
		result.y = y / Mag;
		result.z = z / Mag;

	}
	return result;
}
//--------------------------------------------------------------------------------------
//calculates the distance between two vector4s
//
// Param:
//		Takes in a Vector4
// Return:
//		returns the dist
//--------------------------------------------------------------------------------------
float Vector3::Distance(Vector3& rhs)
{
	float dist;
	Vector3 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;

	dist = result.Magnitude();

	return dist;
}
//--------------------------------------------------------------------------------------
//Divides two vectors
//
// Param:
//		Takes in a float
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::operator/(const float rhs)
{
	Vector3 result;
	result.x = x / rhs;
	result.y = y / rhs;
	result.z = z / rhs;

	return result;
}
//--------------------------------------------------------------------------------------
//positive number
//
// Param:
//		none
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::posOperator()
{
	Vector3 result;
	result.x = +x;
	result.y = +y;
	result.z = +z;

	return result;
}
//--------------------------------------------------------------------------------------
//negative number
//
// Param:
//		none
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::operator-()
{
	Vector3 result;
	result.x = -x;
	result.y = -y;
	result.z = -z;

	return result;
}
//--------------------------------------------------------------------------------------
//short for x = x + y
//
// Param:
//		Takes in a Vector4
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::operator+= (const Vector3& rhs)
{
	x += rhs.x;
	y += rhs.y;
	z += rhs.z;

	return *this;
}

float& Vector3::operator[](const int rhs)
{
	if (rhs == 0)
	{
		return x;
	}
	else if (rhs == 1)
	{
		return y;
	}
	else if (rhs == 2)
	{
		return z;
	}
	else
	{
		return x;
	}
}

Vector3::operator float*()
{
	return &x;
}
//--------------------------------------------------------------------------------------
//calculates the minimum of the vector4
//
// Param:
//		Takes in a Vector4
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::min(const Vector3 & rhs)
{
	Vector3 result;
	if (x < rhs.x)
		result.x = x;
	else
		result.x = rhs.x;

	if (y < rhs.y)
		result.y = y;
	else
		result.y = rhs.y;

	if (z < rhs.z)
		result.z = z;
	else
		result.z = rhs.z;

	return result;
}
//--------------------------------------------------------------------------------------
//calculates the maximum of the vector4
//
// Param:
//		Takes in a Vector4
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::max(const Vector3& rhs)
{
	Vector3 result;
	if (x > rhs.x)
		result.x = x;
	else
		result.x = rhs.x;

	if (y > rhs.y)
		result.y = y;
	else
		result.y = rhs.y;

	if (z > rhs.z)
		result.z = z;
	else
		result.z = rhs.z;

	return result;
}
//--------------------------------------------------------------------------------------
//moves the point to the nearest available value.
//
// Param:
//		Takes in two Vector4s
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::clamp(Vector3& min, Vector3& max)
{
	Vector3 result;
	result = this->min(min);
	result = result.max(max);
	return result;
}
//--------------------------------------------------------------------------------------
//Swizzles the elements of the vector, assigning differing values depending on the variables in the function name
//
// Param:
//		none
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Vector3::xxx()
{
	Vector3 result;
	result.x = x;
	result.y = x;
	result.z = x;
	return result;
}
Vector3 Vector3::xxy()
{
	Vector3 result;
	result.x = x;
	result.y = x;
	result.z = y;
	return result;
}
Vector3 Vector3::xxz()
{
	Vector3 result;
	result.x = x;
	result.y = x;
	result.z = z;
	return result;
}
Vector3 Vector3::xyx()
{
	Vector3 result;
	result.x = x;
	result.y = y;
	result.z = x;
	return result;
}
Vector3 Vector3::xyy()
{
	Vector3 result;
	result.x = x;
	result.y = y;
	result.z = y;
	return result;
}
Vector3 Vector3::xyz()
{
	Vector3 result;
	result.x = x;
	result.y = y;
	result.z = z;
	return result;
}
Vector3 Vector3::xzx()
{
	Vector3 result;
	result.x = x;
	result.y = z;
	result.z = x;
	return result;
}
Vector3 Vector3::xzy()
{
	Vector3 result;
	result.x = x;
	result.y = z;
	result.z = y;
	return result;
}
Vector3 Vector3::xzz()
{
	Vector3 result;
	result.x = x;
	result.y = z;
	result.z = z;
	return result;
}
Vector3 Vector3::yxx()
{
	Vector3 result;
	result.x = y;
	result.y = x;
	result.z = x;
	return result;
}
Vector3 Vector3::yxy()
{
	Vector3 result;
	result.x = y;
	result.y = x;
	result.z = y;
	return result;
}
Vector3 Vector3::yxz()
{
	Vector3 result;
	result.x = y;
	result.y = x;
	result.z = z;
	return result;
}
Vector3 Vector3::yyx()
{
	Vector3 result;
	result.x = y;
	result.y = y;
	result.z = x;
	return result;
}
Vector3 Vector3::yyy()
{
	Vector3 result;
	result.x = y;
	result.y = y;
	result.z = y;
	return result;
}
Vector3 Vector3::yyz()
{
	Vector3 result;
	result.x = y;
	result.y = y;
	result.z = z;
	return result;
}
Vector3 Vector3::yzx()
{
	Vector3 result;
	result.x = y;
	result.y = z;
	result.z = x;
	return result;
}
Vector3 Vector3::yzy()
{
	Vector3 result;
	result.x = y;
	result.y = z;
	result.z = y;
	return result;
}
Vector3 Vector3::yzz()
{
	Vector3 result;
	result.x = y;
	result.y = z;
	result.z = z;
	return result;
}
Vector3 Vector3::zxx()
{
	Vector3 result;
	result.x = z;
	result.y = x;
	result.z = x;
	return result;
}
Vector3 Vector3::zxy()
{
	Vector3 result;
	result.x = z;
	result.y = x;
	result.z = y;
	return result;
}
Vector3 Vector3::zxz()
{
	Vector3 result;
	result.x = z;
	result.y = x;
	result.z = z;
	return result;
}
Vector3 Vector3::zyx()
{
	Vector3 result;
	result.x = z;
	result.y = y;
	result.z = x;
	return result;
}
Vector3 Vector3::zyy()
{
	Vector3 result;
	result.x = z;
	result.y = y;
	result.z = y;
	return result;
}
Vector3 Vector3::zyz()
{
	Vector3 result;
	result.x = z;
	result.y = y;
	result.z = z;
	return result;
}
Vector3 Vector3::zzx()
{
	Vector3 result;
	result.x = z;
	result.y = z;
	result.z = x;
	return result;
}
Vector3 Vector3::zzy()
{
	Vector3 result;
	result.x = z;
	result.y = z;
	result.z = y;
	return result;
}
Vector3 Vector3::zzz()
{
	Vector3 result;
	result.x = z;
	result.y = z;
	result.z = z;
	return result;
}