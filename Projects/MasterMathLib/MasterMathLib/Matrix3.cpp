#include "matrix3.h"
#include <math.h>



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

Matrix3::~Matrix3()
{
}

Vector3 Matrix3::operator*(const Vector3& rhs)
{
	Vector3 result;
	result.x = m[0][0] * rhs.x + m[1][0] * rhs.y + m[2][0] * rhs.z;
	result.y = m[0][1] * rhs.x + m[1][1] * rhs.y + m[2][1] * rhs.z;
	result.z = m[0][2] * rhs.x + m[1][2] * rhs.y + m[2][2] * rhs.z;

	return result;
}

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

Vector3& Matrix3::operator[](const int rhs)
{
	return*(Vector3*)m[rhs];
}

Matrix3::operator float*()
{
	return &m[0][0];
}
