#include "matrix3.h"

//--------------------------------------------------------------------------------------
//Constructor
//--------------------------------------------------------------------------------------
Matrix3::Matrix3()
{
	m[0][0] = 1;
	m[0][1] = 0;
	m[0][2] = 0;
	m[1][0] = 0;
	m[1][1] = 1;
	m[1][2] = 0;
	m[2][0] = 0;
	m[2][1] = 0;
	m[2][2] = 1;
}
//--------------------------------------------------------------------------------------
//Constructor
//--------------------------------------------------------------------------------------
Matrix3::Matrix3(float xx, float xy, float xz, float yx, float yy, float yz, float zx, float zy, float zz)
{
	m[0][0] = xx;
	m[0][1] = xy;
	m[0][2] = xz;
	m[1][0] = yx;
	m[1][1] = yy;
	m[1][2] = yz;
	m[2][0] = zx;
	m[2][1] = zy;
	m[2][2] = zz;
}
//--------------------------------------------------------------------------------------
//Deconstructor
//--------------------------------------------------------------------------------------
Matrix3::~Matrix3()
{
}
//--------------------------------------------------------------------------------------
// Times matrix4 with Vector4
//
// Param:
//		takes in a vector4
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector3 Matrix3::operator*(const Vector3& rhs)
{
	Vector3 result;
	result.x = m[0][0] * rhs.x + m[1][0] * rhs.y + m[2][0] * rhs.z;
	result.y = m[0][1] * rhs.x + m[1][1] * rhs.y + m[2][1] * rhs.z;
	result.z = m[0][2] * rhs.x + m[1][2] * rhs.y + m[2][2] * rhs.z;

	return result;
}
//--------------------------------------------------------------------------------------
// Times two matrix3s together
//
// Param:
//		takes in a matrix3
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Matrix3 Matrix3::operator*(const Matrix3& rhs)
{
	Matrix3 result;
	result.m[0][0] = m[0][0] * rhs.m[0][0] + m[1][0] * rhs.m[0][1] + m[2][0] * rhs.m[0][2];
	result.m[1][0] = m[0][0] * rhs.m[1][0] + m[1][0] * rhs.m[1][1] + m[2][0] * rhs.m[1][2];
	result.m[2][0] = m[0][0] * rhs.m[2][0] + m[1][0] * rhs.m[2][1] + m[2][0] * rhs.m[2][2];

	result.m[0][1] = m[0][1] * rhs.m[0][0] + m[1][1] * rhs.m[0][1] + m[2][1] * rhs.m[0][2];
	result.m[1][1] = m[0][1] * rhs.m[1][0] + m[1][1] * rhs.m[1][1] + m[2][1] * rhs.m[1][2];
	result.m[2][1] = m[0][1] * rhs.m[2][0] + m[1][1] * rhs.m[2][1] + m[2][1] * rhs.m[2][2];

	result.m[0][2] = m[0][2] * rhs.m[0][0] + m[1][2] * rhs.m[0][1] + m[2][2] * rhs.m[0][2];
	result.m[1][2] = m[0][2] * rhs.m[1][0] + m[1][2] * rhs.m[1][1] + m[2][2] * rhs.m[1][2];
	result.m[2][2] = m[0][2] * rhs.m[2][0] + m[1][2] * rhs.m[2][1] + m[2][2] * rhs.m[2][2];

	return result;
}
//--------------------------------------------------------------------------------------
//sets rotation for the x axis
//
// Param:
//		takes in a float
// Return:
//		none
//--------------------------------------------------------------------------------------
void Matrix3::setRotationX(const float a)
{
	m[0][0] = 1;
	m[1][0] = 0;
	m[2][0] = 0;
	m[0][1] = 0;
	m[1][1] = cosf(a);
	m[2][1] = -sinf(a);
	m[0][2] = 0;
	m[1][2] = sinf(a);
	m[2][2] = cosf(a);
}
//--------------------------------------------------------------------------------------
//sets rotation for the y axis
//
// Param:
//		takes in a float
// Return:
//		none
//--------------------------------------------------------------------------------------
void Matrix3::setRotationY(const float a)
{
	m[0][0] = cosf(a);
	m[1][0] = 0;
	m[2][0] = sinf(a);
	m[0][1] = 0;
	m[1][1] = 1;
	m[2][1] = 0;
	m[0][2] = -sinf(a);
	m[1][2] = 0;
	m[2][2] = cosf(a);
}
//--------------------------------------------------------------------------------------
//sets rotation for the z axis
//
// Param:
//		takes in a float
// Return:
//		none
//--------------------------------------------------------------------------------------
void Matrix3::setRotationZ(const float a)
{
	m[0][0] = cosf(a);
	m[1][0] = -sinf(a);
	m[2][0] = 0;
	m[0][1] = sinf(a);
	m[1][1] = cosf(a);
	m[2][1] = 0;
	m[0][2] = 0;
	m[1][2] = 0;
	m[2][2] = 1;
}
//--------------------------------------------------------------------------------------
//sets the position 
//
// Param:
//		takes in a vector3
// Return:
//		none
//--------------------------------------------------------------------------------------
void Matrix3::setPosition(const Vector2& rhs)
{
	m[0][0] = 1;
	m[1][0] = 0;
	m[2][0] = 0;
	m[0][1] = 0;
	m[1][1] = 1;
	m[2][1] = 0;
	m[0][2] = rhs.x;
	m[1][2] = rhs.y;
	m[2][2] = 1;
}
//--------------------------------------------------------------------------------------
//gets the position 
//
// Param:
//		takes in three floats
// Return:
//		returns result
//--------------------------------------------------------------------------------------
Vector3 Matrix3::getPosition(const float x, const float y, const float z)
{
	Vector3 result;
	result.x = m[0][3];
	result.y = m[1][3];
	result.z = m[2][3];
	return result;
}
//--------------------------------------------------------------------------------------
//sets the scale 
//
// Param:
//		takes in three floats
// Return:
//		none
//--------------------------------------------------------------------------------------
void Matrix3::setScale(const float x, const float y)
{
	m[0][0] = x;
	m[1][0] = 0;
	m[2][0] = 0;
	m[0][1] = 0;
	m[1][1] = y;
	m[2][1] = 0;
	m[0][2] = 0;
	m[1][2] = 0;
	m[2][2] = 1;
}
//--------------------------------------------------------------------------------------
//gets the scale 
//
// Param:
//		takes in three floats
// Return:
//		returns result
//--------------------------------------------------------------------------------------
Vector3 Matrix3::getScale()
{
	Vector3 result;
	result.x = m[0][0];
	result.y = m[1][1];
	result.z = m[2][2];
	return result;
}
//--------------------------------------------------------------------------------------
//sets rotation for x axis in degrees
//
// Param:
//		takes in a float
// Return:
//		none
//--------------------------------------------------------------------------------------
void Matrix3::setRotationDegX(const float a)
{
	float rad = convertDegToRad(a);
	setRotationX(rad);
}
//--------------------------------------------------------------------------------------
//sets rotation for y axis in degrees
//
// Param:
//		takes in a float
// Return:
//		none
//--------------------------------------------------------------------------------------
void Matrix3::setRotationDegY(const float a)
{
	float rad = convertDegToRad(a);
	setRotationY(rad);
}
//--------------------------------------------------------------------------------------
//sets rotation for z axis in degrees
//
// Param:
//		takes in a float
// Return:
//		none
//--------------------------------------------------------------------------------------
void Matrix3::setRotationDegZ(const float a)
{
	float rad = convertDegToRad(a);
	setRotationZ(rad);
}

Vector3& Matrix3::operator[](const int rhs)
{
	return*(Vector3*)m[rhs];
}

Matrix3::operator float*()
{
	return &m[0][0];
}
//--------------------------------------------------------------------------------------
//converts radians to degrees
//
// Param:
//		takes in a float
// Return:
//		returns Degree
//--------------------------------------------------------------------------------------
float Matrix3::convertRadToDeg(float Radian)
{
	float Degree;
	Degree = Radian * (180.0f / M_PI);
	return Degree;
}
//--------------------------------------------------------------------------------------
//converts degrees to radians
//
// Param:
//		takes in a float
// Return:
//		returns Radian
//--------------------------------------------------------------------------------------
float Matrix3::convertDegToRad(float Degree)
{
	float Radian;
	Radian = Degree * (M_PI / 180.0f);
	return Radian;
}
//--------------------------------------------------------------------------------------
// interchanges each row and the corresponding column.
//
// Param:
//		none
// Return:
//		none
//--------------------------------------------------------------------------------------
Matrix3 Matrix3::Transpose()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			m[i][j] = m[j][i];
		}
	}
}

float Matrix3::Determinant(float Det)
{
	float A = m[0][0];
	float B = m[1][0];
	float C = m[2][0];
	float D = m[0][1];
	float E = m[1][1];
	float F = m[2][1];
	float G = m[0][2];
	float H = m[1][2];
	float I = m[2][2];

	return Det = A*(E*I - F*H)
		- B*(D*I - F*G)
		+ C*(D*H - E*G);
}
//--------------------------------------------------------------------------------------
//Checks if matrix is an identity matrix
//
// Param:
//		none
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Matrix3::isIdentity()
{
	int count = 0;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (i == j && m[i][j] == 1)
				++count;
			else if (i != j && m[i][j] == 0)
				++count;
		}
	}
	if (count == 9)
	{
		return true;
	}

	return false;
}