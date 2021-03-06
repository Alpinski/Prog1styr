#include "Vector4.h"

//--------------------------------------------------------------------------------------
//Constructor
//--------------------------------------------------------------------------------------
Vector4::Vector4()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
	w = 0.0f;
}
//--------------------------------------------------------------------------------------
//Constructor
//--------------------------------------------------------------------------------------
Vector4::Vector4(float newX, float newY, float newZ, float newW)
{
	x = newX;
	y = newY;
	z = newZ;
	w = newW;
}
//--------------------------------------------------------------------------------------
//Deconstructor
//--------------------------------------------------------------------------------------
Vector4::~Vector4()
{
}
//--------------------------------------------------------------------------------------
// Adds two vector4s together
//
// Param:
//		takes in a vector4 
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector4 Vector4::operator+(const Vector4& rhs)
{
	Vector4 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;
	result.z = z + rhs.z;
	result.w = w + rhs.w;

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
Vector4 Vector4::operator-(const Vector4& rhs)
{
	Vector4 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;
	result.w = w - rhs.w;

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
Vector4 Vector4::operator*(const float rhs)
{
	Vector4 result;
	result.x = x * rhs;
	result.y = y * rhs;
	result.z = z * rhs;
	result.w = w * rhs;

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
Vector4 operator*(float lhs, const Vector4& rhs)
{
	Vector4 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
	result.z = lhs * rhs.z;
	result.w = lhs * rhs.w;

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
float Vector4::Dot(Vector4& rhs)
{
	float result;
	result = x * rhs.x + y * rhs.y + z * rhs.z + w * rhs.w;
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
bool Vector4:: operator> (const Vector4& rhs)
{
	return(x > rhs.x && y > rhs.y && z > rhs.z && w > rhs.w);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number is less than the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector4:: operator< (const Vector4& rhs)
{
	return(x < rhs.x && y < rhs.y && z < rhs.z && w < rhs.w);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number is equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector4::operator==(const Vector4& rhs)
{
	return(x == rhs.x && y == rhs.y && z == rhs.z && w == rhs.w);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number does not equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector4::operator!=(const Vector4& rhs)
{
	return(x != rhs.x && y != rhs.y && z != rhs.z && w != rhs.w);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number greater than or equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector4::operator>=(const Vector4& rhs)
{
	return(x >= rhs.x && y >= rhs.y && z >= rhs.z && w >= rhs.w);
}
//--------------------------------------------------------------------------------------
// returns true or false depending on if the number less than or equal to the other number
//
// Param:
//		takes in a vector4 
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Vector4::operator<=(const Vector4& rhs)
{
	return(x <= rhs.x && y <= rhs.y && z <= rhs.z && w <= rhs.w);
}
//--------------------------------------------------------------------------------------
//the cross product is a 
//
// Param:
//		takes in a vector4 
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector4 Vector4::Cross(Vector4& rhs)
{
	Vector4 result;
	result.x = y * rhs.z - z * rhs.y;
	result.y = z * rhs.x - x * rhs.z;
	result.z = x * rhs.y - y * rhs.x;
	result.w = 0;
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
float Vector4::Magnitude()
{
	float result;
	result = sqrtf((x*x) + (y*y) + (z*z) + (w*w));
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
float Vector4::sqrMagnitude()
{
	float result;
	result = (x*x) + (y*y) + (z*z);
	return result;
}
//--------------------------------------------------------------------------------------
//multiply by a factor that makes an integral equal to a desired value
//
// Param:
//		none
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
void Vector4::Normalise()
{
	float length = Magnitude();
	if (length != 0)
	{
		x /= length;
		y /= length;
		z /= length;
		w /= length;
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
Vector4 Vector4::Normalised(Vector4& data)
{
	Vector4 result;
	float Mag = data.Magnitude();
	if (!Mag == 0)
	{
		result.x = x / Mag;
		result.y = y / Mag;
		result.z = z / Mag;
		result.w = w / Mag;
	}
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
Vector4 Vector4::posOperator()
{
	Vector4 result;
	result.x = +x;
	result.y = +y;
	result.z = +z;
	result.z = +w;

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
Vector4 Vector4::operator-()
{
	Vector4 result;
	result.x = -x;
	result.y = -y;
	result.z = -z;
	result.z = -w;

	return result;
}
//--------------------------------------------------------------------------------------
//Divides two vectors
//
// Param:
//		Takes in a float
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector4 Vector4::operator/(const float rhs)
{
	Vector4 result;
	result.x = x / rhs;
	result.y = y / rhs;
	result.z = z / rhs;
	result.w = w / rhs;
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
Vector4 Vector4::operator+= (const Vector4& rhs)
{
	x += rhs.x;
	y += rhs.y;
	z += rhs.z;
	w += rhs.w;

	return *this;
}

float& Vector4::operator[](const int rhs)
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
	else if (rhs == 3)
	{
		return w;
	}
	else
	{
		return x;
	}
}

Vector4::operator float*()
{
	return &x;
}
//--------------------------------------------------------------------------------------
//calculates the distance between two vector4s
//
// Param:
//		Takes in a Vector4
// Return:
//		returns the dist
//--------------------------------------------------------------------------------------
float Vector4::Distance(Vector4& rhs)
{
	float dist;
	Vector4 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;
	result.w = w - rhs.w;

	dist = result.Magnitude();

	return dist;
}
//--------------------------------------------------------------------------------------
//calculates the minimum of the vector4
//
// Param:
//		Takes in a Vector4
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector4 Vector4::min(const Vector4 & rhs)
{
	Vector4 result;
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

	if (w < rhs.w)
		result.w = w;
	else
		result.w = rhs.w;

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
Vector4 Vector4::max(const Vector4 & rhs)
{
	Vector4 result;
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

	if (w > rhs.w)
		result.w = w;
	else
		result.w = rhs.w;

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
Vector4 Vector4::clamp(Vector4& min, Vector4& max)
{
	Vector4 result;
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
Vector4 Vector4::xxxx()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::xxxy()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::xxxz()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::xxxw()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::xxyx()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::xxyy()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::xxyz()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::xxyw()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::xxzx()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::xxzy()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::xxzz()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::xxzw()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::xxwx()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::xxwy()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::xxwz()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::xxww()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::xyxx()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::xyxy()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::xyxz()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::xyxw()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::xyyx()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::xyyy()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::xyyz()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::xyyw()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::xyzx()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::xyzy()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::xyzz()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::xyzw()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::xywx()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::xywy()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::xywz()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::xyww()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::xzxx()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::xzxy()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::xzxz()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::xzxw()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::xzyx()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::xzyy()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::xzyz()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::xzyw()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::xzzx()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::xzzy()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::xzzz()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::xzzw()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::xzwx()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::xzwy()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::xzwz()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::xzww()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::xwxx()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::xwxy()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::xwxz()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::xwxw()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::xwyx()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::xwyy()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::xwyz()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::xwyw()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::xwzx()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::xwzy()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::xwzz()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::xwzw()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::xwwx()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::xwwy()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::xwwz()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::xwww()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::yxxx()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::yxxy()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::yxxz()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::yxxw()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::yxyx()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::yxyy()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::yxyz()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::yxyw()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::yxzx()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::yxzy()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::yxzz()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::yxzw()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::yxwx()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::yxwy()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::yxwz()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::yxww()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::yyxx()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::yyxy()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::yyxz()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::yyxw()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::yyyx()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::yyyy()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::yyyz()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::yyyw()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::yyzx()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::yyzy()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::yyzz()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::yyzw()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::yywx()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::yywy()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::yywz()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::yyww()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::yzxx()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::yzxy()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::yzxz()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::yzxw()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::yzyx()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::yzyy()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::yzyz()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::yzyw()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::yzzx()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::yzzy()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::yzzz()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::yzzw()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::yzwx()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::yzwy()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::yzwz()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::yzww()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::ywxx()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::ywxy()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::ywxz()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::ywxw()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::ywyx()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::ywyy()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::ywyz()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::ywyw()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::ywzx()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::ywzy()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::ywzz()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::ywzw()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::ywwx()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::ywwy()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::ywwz()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::ywww()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::zxxx()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::zxxy()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::zxxz()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::zxxw()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::zxyx()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::zxyy()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::zxyz()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::zxyw()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::zxzx()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::zxzy()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::zxzz()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::zxzw()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::zxwx()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::zxwy()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::zxwz()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::zxww()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::zyxx()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::zyxy()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::zyxz()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::zyxw()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::zyyx()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::zyyy()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::zyyz()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::zyyw()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::zyzx()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::zyzy()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::zyzz()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::zyzw()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::zywx()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::zywy()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::zywz()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::zyww()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::zzxx()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::zzxy()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::zzxz()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::zzxw()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::zzyx()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::zzyy()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::zzyz()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::zzyw()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::zzzx()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::zzzy()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::zzzz()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::zzzw()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::zzwx()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::zzwy()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::zzwz()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::zzww()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::zwxx()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::zwxy()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::zwxz()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::zwxw()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::zwyx()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::zwyy()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::zwyz()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::zwyw()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::zwzx()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::zwzy()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::zwzz()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::zwzw()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::zwwx()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::zwwy()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::zwwz()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::zwww()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::wxxx()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::wxxy()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::wxxz()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::wxxw()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::wxyx()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::wxyy()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::wxyz()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::wxyw()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::wxzx()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::wxzy()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::wxzz()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::wxzw()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::wxwx()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::wxwy()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::wxwz()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::wxww()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::wyxx()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::wyxy()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::wyxz()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::wyxw()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::wyyx()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::wyyy()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::wyyz()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::wyyw()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::wyzx()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::wyzy()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::wyzz()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::wyzw()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::wywx()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::wywy()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::wywz()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::wyww()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::wzxx()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::wzxy()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::wzxz()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::wzxw()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::wzyx()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::wzyy()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::wzyz()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::wzyw()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::wzzx()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::wzzy()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::wzzz()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::wzzw()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::wzwx()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::wzwy()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::wzwz()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::wzww()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = w;
	result.w = w;
	return result;
}
Vector4 Vector4::wwxx()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = x;
	result.w = x;
	return result;
}
Vector4 Vector4::wwxy()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = x;
	result.w = y;
	return result;
}
Vector4 Vector4::wwxz()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = x;
	result.w = z;
	return result;
}
Vector4 Vector4::wwxw()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = x;
	result.w = w;
	return result;
}
Vector4 Vector4::wwyx()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = y;
	result.w = x;
	return result;
}
Vector4 Vector4::wwyy()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = y;
	result.w = y;
	return result;
}
Vector4 Vector4::wwyz()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = y;
	result.w = z;
	return result;
}
Vector4 Vector4::wwyw()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = y;
	result.w = w;
	return result;
}
Vector4 Vector4::wwzx()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = z;
	result.w = x;
	return result;
}
Vector4 Vector4::wwzy()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = z;
	result.w = y;
	return result;
}
Vector4 Vector4::wwzz()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = z;
	result.w = z;
	return result;
}
Vector4 Vector4::wwzw()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = z;
	result.w = w;
	return result;
}
Vector4 Vector4::wwwx()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = w;
	result.w = x;
	return result;
}
Vector4 Vector4::wwwy()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = w;
	result.w = y;
	return result;
}
Vector4 Vector4::wwwz()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = w;
	result.w = z;
	return result;
}
Vector4 Vector4::wwww()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = w;
	result.w = w;
	return result;
}