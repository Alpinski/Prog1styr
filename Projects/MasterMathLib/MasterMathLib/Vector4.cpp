#include "Vector4.h"
#include <math.h>


Vector4::Vector4()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
	w = 0.0f;
}

Vector4::Vector4(float newX, float newY, float newZ, float newW)
{
	x = newX;
	y = newY;
	z = newZ;
	w = newW;
}

Vector4::~Vector4()
{
}

Vector4 Vector4::operator+(const Vector4& rhs)
{
	Vector4 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;
	result.z = z + rhs.z;
	result.w = w + rhs.w;

	return result;
}

//Vector3 Vector3::Add(const Vector3& rhs)
//{
//	return Translate(rhs);
//	
//}

Vector4 Vector4::operator-(const Vector4& rhs)
{
	Vector4 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;
	result.w = w - rhs.w;

	return result;
}

Vector4 Vector4::operator*(const float rhs)
{
	Vector4 result;
	result.x = x * rhs;
	result.y = y * rhs;
	result.z = z * rhs;
	result.w = w * rhs;

	return result;
}

Vector4 operator*(float lhs, const Vector4 rhs)
{
	Vector4 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
	result.z = lhs * rhs.z;
	result.w = lhs * rhs.w;

	return result;
}

float Vector4::Dot(Vector4 rhs)
{
	float result;
	result = x * rhs.x + y * rhs.y + z * rhs.z + w * rhs.w;
	return result;
}


Vector4 Vector4::Cross(Vector4 rhs)
{
	Vector4 result;
	result.x = y * rhs.z - z * rhs.y;
	result.y = z * rhs.x - x * rhs.z;
	result.z = x * rhs.y - y * rhs.x;
	result.w = 0;
	return result;
}

float Vector4::Magnitude()
{
	float result;
	result = sqrtf((x*x) + (y*y) + (z*z) + (w*w));
	return result;
}

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

Vector4 Vector4::posOperator()
{
	Vector4 result;
	result.x = +x;
	result.y = +y;
	result.z = +z;
	result.z = +w;

	return result;
}

Vector4 Vector4::operator-()
{
	Vector4 result;
	result.x = -x;
	result.y = -y;
	result.z = -z;
	result.z = -w;

	return result;
}

//Vector3 Vector3::Multiply(float scalar)
//{
//	return Scale(scalar);
//
//}

Vector4 Vector4::operator/(const float rhs)
{
	Vector4 result;
	result.x = x / rhs;
	result.y = y / rhs;
	result.z = z / rhs;
	result.w = w / rhs;
	return result;
}

Vector4 Vector4::operator+= (const Vector4& rhs)
{
	x += rhs.x;
	y += rhs.y;
	z += rhs.z;
	w += rhs.w;

	return *this;
}


bool Vector4:: operator> (const Vector4& rhs)
{
	return(x > rhs.x && y > rhs.y && z > rhs.z && w > rhs.w);
}

bool Vector4:: operator< (const Vector4& rhs)
{
	return(x < rhs.x && y < rhs.y && z < rhs.z && w < rhs.w);
}

bool Vector4::operator==(const Vector4& rhs)
{
	return(x == rhs.x && y == rhs.y && z == rhs.z && w == rhs.w);
}

bool Vector4::operator!=(const Vector4& rhs)
{
	return(x != rhs.x && y != rhs.y && z != rhs.z && w != rhs.w);
}

bool Vector4::operator<=(const Vector4& rhs)
{
	return(x <= rhs.x && y <= rhs.y && z <= rhs.z && w <= rhs.w);
}

bool Vector4::operator>=(const Vector4& rhs)
{
	return(x >= rhs.x && y >= rhs.y && z >= rhs.z && w >= rhs.w);
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

float Vector4::Distance(Vector4 rhs)
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
	result.w = x;
	return result;
}