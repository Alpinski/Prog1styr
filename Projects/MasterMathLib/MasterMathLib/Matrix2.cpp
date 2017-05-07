#include "Matrix2.h"

Matrix2::Matrix2()
{
	m[0][0] = 1;
	m[1][0] = 0;
	m[0][1] = 0;
	m[1][1] = 1;
}

Matrix2::Matrix2(float xx, float xy, float yx , float yy)
{
	m[0][0] = xx;
	m[1][0] = xy;
	m[0][1] = yx;
	m[1][1] = yy;
}

Matrix2::~Matrix2()
{
}

Vector2 Matrix2::operator*(const Vector2& rhs)
{
	Vector2 result;
	result.x = m[0][0] * rhs.x + m[0][1] * rhs.y;
	result.y = m[1][0] * rhs.x + m[1][1] * rhs.y;

	return result;
}

Matrix2 Matrix2::operator*(const Matrix2& rhs)
{
	Matrix2 result;
	result.m[0][0] = m[0][0] * rhs.m[0][0] + m[1][0] * rhs.m[0][1];
	result.m[1][0] = m[0][0] * rhs.m[1][0] + m[1][0] * rhs.m[1][1];

	result.m[0][1] = m[0][1] * rhs.m[0][0] + m[1][1] * rhs.m[0][1];
	result.m[1][1] = m[0][1] * rhs.m[1][0] + m[1][1] * rhs.m[1][1];

	return result;
}

void Matrix2::setRotation(const float a)
{
	m[0][0] = cosf(a);
	m[1][0] = sinf(a);
	m[0][1] = -sinf(a);
	m[1][1] = cosf(a);
}

void Matrix2::setScale(const float x, const float y)
{
	m[0][0] = x;
	m[1][0] = 0;
	m[0][1] = 0;
	m[1][1] = y;
}

Vector2 Matrix2::getScale(const float x, const float y, const float z)
{
	Vector2 result;
	result.x = m[0][0];
	result.y = m[1][1];

	return result;
}


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

float Matrix2::convertRadToDeg(float Radian)
{
	float Degree;
	Degree = Radian * (180.0f / M_PI);
	return Degree;
}

float Matrix2::convertDegToRad(float Degree)
{
	float Radian;
	Radian = Degree * (M_PI / 180.0f);
	return Radian;
}

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