#include "matrix3.h"




Matrix3::Matrix3()
{
	m[0][0] = 1;
	m[0][1] = 0;
	m[1][0] = 0;
	m[1][1] = 1;
}

Matrix3::Matrix3(float xx, float xy, float xz, float yy, float yx, float yz, float zz, float zx, float zy)
{
	m[0][0] = xx;
	m[0][1] = xy;
	m[1][0] = yx;
	m[1][1] = yy;
}

Matrix3::~Matrix3()
{
}

Vector3 Matrix3::operator*(const Vector3& rhs)
{
	Vector3 result;
	result.x = m[0][0] * rhs.x + m[0][1] * rhs.x + m[0][2] * rhs.x;
	result.y = m[1][0] * rhs.y + m[1][1] * rhs.y + m[1][2] * rhs.y;
	result.z = m[2][0] * rhs.z + m[2][1] * rhs.z + m[2][2] * rhs.z;

	return result;
}

Matrix3 Matrix3::operator*(const Matrix3& rhs)
{
	Matrix3 result;
	result.m[0][0] = m[0][0] * rhs.m[0][0] + m[0][1] * rhs.m[1][0] + m[0][2] * rhs.m[2][0];
	result.m[0][1] = m[0][0] * rhs.m[0][1] + m[0][1] * rhs.m[1][1] + m[0][2] * rhs.m[1][2];
	result.m[0][2] = m[0][0] * rhs.m[0][2] + m[0][1] * rhs.m[1][2] + m[0][2] * rhs.m[2][2];

	result.m[1][0] = m[1][0] * rhs.m[0][0] + m[1][1] * rhs.m[1][0];
	result.m[1][1] = m[1][0] * rhs.m[0][1] + m[1][1] * rhs.m[1][1];


	return result;
}
