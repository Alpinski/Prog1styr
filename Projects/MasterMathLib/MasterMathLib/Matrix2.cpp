#include "Matrix2.h"

//--------------------------------------------------------------------------------------
//Constructor
//--------------------------------------------------------------------------------------
Matrix2::Matrix2()
{
	m[0][0] = 1;
	m[1][0] = 0;
	m[0][1] = 0;
	m[1][1] = 1;
}
//--------------------------------------------------------------------------------------
//Constructor
//--------------------------------------------------------------------------------------
Matrix2::Matrix2(float xx, float xy, float yx , float yy)
{
	m[0][0] = xx;
	m[1][0] = xy;
	m[0][1] = yx;
	m[1][1] = yy;
}
//--------------------------------------------------------------------------------------
//Deconstructor
//--------------------------------------------------------------------------------------
Matrix2::~Matrix2()
{
}
//--------------------------------------------------------------------------------------
// Times matrix2 with Vector2
//
// Param:
//		takes in a vector2
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Vector2 Matrix2::operator*(const Vector2& rhs)
{
	Vector2 result;
	result.x = m[0][0] * rhs.x + m[0][1] * rhs.y;
	result.y = m[1][0] * rhs.x + m[1][1] * rhs.y;

	return result;
}
//--------------------------------------------------------------------------------------
// Times two matrix2s together
//
// Param:
//		takes in a matrix2
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
Matrix2 Matrix2::operator*(const Matrix2& rhs)
{
	Matrix2 result;
	result.m[0][0] = m[0][0] * rhs.m[0][0] + m[1][0] * rhs.m[0][1];
	result.m[1][0] = m[0][0] * rhs.m[1][0] + m[1][0] * rhs.m[1][1];

	result.m[0][1] = m[0][1] * rhs.m[0][0] + m[1][1] * rhs.m[0][1];
	result.m[1][1] = m[0][1] * rhs.m[1][0] + m[1][1] * rhs.m[1][1];

	return result;
}
//--------------------------------------------------------------------------------------
//sets rotation
//
// Param:
//		takes in a float
// Return:
//		none
//--------------------------------------------------------------------------------------
void Matrix2::setRotation(const float a)
{
	m[0][0] = cosf(a);
	m[1][0] = sinf(a);
	m[0][1] = -sinf(a);
	m[1][1] = cosf(a);
}
//--------------------------------------------------------------------------------------
//sets the scale 
//
// Param:
//		takes in three floats
// Return:
//		none
//--------------------------------------------------------------------------------------
void Matrix2::setScale(const float x, const float y)
{
	m[0][0] = x;
	m[1][0] = 0;
	m[0][1] = 0;
	m[1][1] = y;
}
//--------------------------------------------------------------------------------------
//gets the scale 
//
// Param:
//		takes in three floats
// Return:
//		returns result
//--------------------------------------------------------------------------------------
Vector2 Matrix2::getScale(const float x, const float y, const float z)
{
	Vector2 result;
	result.x = m[0][0];
	result.y = m[1][1];

	return result;
}

//--------------------------------------------------------------------------------------
//sets rotation in degrees
//
// Param:
//		takes in a float
// Return:
//		none
//--------------------------------------------------------------------------------------
void Matrix2::setRotationDeg(const float a)
{
	float rad = convertDegToRad(a);
	setRotation(rad);
}

Vector2& Matrix2::operator[](const int rhs)
{
	return*(Vector2*)m[rhs];
}

Matrix2::operator float*()
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
float Matrix2::convertRadToDeg(float Radian)
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
float Matrix2::convertDegToRad(float Degree)
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
Matrix2 Matrix2::Transpose()
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			m[i][j] = m[j][i];
		}
	}
}

float Matrix2::Determinant(float Det)
{
	float A = m[0][0];
	float B = m[0][0];
	float C = m[1][0];
	float D = m[2][0];

	return Det = A*D - B*C;
}
//--------------------------------------------------------------------------------------
//Checks if matrix is an identity matrix
//
// Param:
//		none
// Return:
//		returns true or false
//--------------------------------------------------------------------------------------
bool Matrix2::isIdentity()
{
	int count = 0;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (i == j && m[i][j] == 1)
				++count;
			else if (i != j && m[i][j] == 0)
				++count;
		}
	}
	if (count == 4)
	{
		return true;
	}

	return false;
}