#include "Vector2.h"

//--------------------------------------------------------------------------------------
//Constructor
//--------------------------------------------------------------------------------------
Vector2::Vector2()
{
	x = 0.0;
	y = 0.0;
}
//--------------------------------------------------------------------------------------
//Constructor
//--------------------------------------------------------------------------------------
Vector2::Vector2(float newX, float newY)
{
	x = newX;
	y = newY;
}
//--------------------------------------------------------------------------------------
//Deconstructor
//--------------------------------------------------------------------------------------
Vector2::~Vector2()
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
Vector2 Vector2::operator+(const Vector2& rhs)
{
	Vector2 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;

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
Vector2 Vector2::operator-(const Vector2& rhs)
{
	Vector2 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;

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
Vector2 Vector2::operator*(const float rhs)
{
	Vector2 result;
	result.x = x * rhs;
	result.y = y * rhs;

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
Vector2 operator*(float lhs, const Vector2 rhs)
{	
	Vector2 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
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
float Vector2::Dot(Vector2& rhs)
{
	float result;
	result = x * rhs.x + y * rhs.y;
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
bool Vector2::operator> (const Vector2& rhs)
{
	return(x > rhs.x && y > rhs.y);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number is less than the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector2::operator< (const Vector2& rhs)
{
	return(x < rhs.x && y < rhs.y);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number is equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector2::operator==(const Vector2& rhs)
{
	return(x == rhs.x && y == rhs.y);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number does not equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector2::operator!=(const Vector2& rhs)
{
	return(x != rhs.x && y != rhs.y);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number greater than or equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector2::operator<=(const Vector2& rhs)
{
	return(x <= rhs.x && y <= rhs.y);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number less than or equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector2::operator>=(const Vector2& rhs)
{
	return(x >= rhs.x && y >= rhs.y);
}
//--------------------------------------------------------------------------------------
//How large an object is
//
// Param:
//		none
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
float Vector2::Magnitude()
{
	float result;
	result = sqrtf((x*x) + (y*y));
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
float Vector2::sqrMagnitude()
{
	float result;
	result = (x*x) + (y*y);
	return result;
}
//--------------------------------------------------------------------------------------
//multiply by a factor that makes an integral equal to a desired value
//
// Param:
//		Takes in a Vector4
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
void Vector2::Normalise()
{
	float length = Magnitude();
	if (length != 0)
	{
		x /= length;
		y /= length;
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
Vector2 Vector2::Normalised(Vector2& data)
{
	Vector2 result;
	float Mag = data.Magnitude();
	if (!Mag == 0)
	{
		result.x = x / Mag;
		result.y = y / Mag;
		
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
float Vector2::Distance(Vector2& rhs)
{
	float dist;
	Vector2 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;

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
Vector2 Vector2::operator/(const float rhs)
{
	Vector2 result;
	result.x = x / rhs;
	result.y = y / rhs;

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
Vector2 Vector2::posOperator()
{
	Vector2 result;
	result.x = +x;
	result.y = +y;

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
Vector2 Vector2::operator-()
{
	Vector2 result;
	result.x = -x;
	result.y = -y;

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
Vector2 Vector2::operator+= (const Vector2& rhs)
{
	x += rhs.x;
	y += rhs.y;

	return *this;
}

float& Vector2::operator[](const int rhs)
{
	if (rhs == 0)
	{
		return x;
	}
	else if (rhs == 1)
	{
		return y;
	}
	else
	{
		return x;
	}
}

Vector2::operator float*()
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
Vector2 Vector2::min(const Vector2& rhs)
{
	Vector2 result;
	if (x < rhs.x)
		result.x = x;
	else
		result.x = rhs.x;

	if (y < rhs.y)
		result.y = y;
	else
		result.y = rhs.y;

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
Vector2 Vector2::max(const Vector2& rhs)
{
	Vector2 result;
	if (x > rhs.x)
		result.x = x;
	else
		result.x = rhs.x;

	if (y > rhs.y)
		result.y = y;
	else
		result.y = rhs.y;

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
Vector2 Vector2::clamp(Vector2& min, Vector2& max)
{
	Vector2 result;
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
Vector2 Vector2::xx()
{
	Vector2 result;
	result.x = x;
	result.y = x;
	return result;
}

Vector2 Vector2::xy()
{
	Vector2 result;
	result.x = x;
	result.y = y;
	return result;
}

Vector2 Vector2::yx()
{
	Vector2 result;
	result.x = y;
	result.y = x;
	return result;
}

Vector2 Vector2::yy()
{
	Vector2 result;
	result.x = y;
	result.y = y;
	return result;
}