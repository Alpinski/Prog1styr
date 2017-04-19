#include "Matrix2.h"

Matrix2::Matrix2()
{
	m[0][0] = 1;
	m[0][1] = 0;
	m[1][0] = 0;
	m[1][1] = 1;
}

Matrix2::Matrix2(float a, float b, float c, float d)
{
	m[0][0] = a;
	m[0][1] = b;
	m[1][0] = c;
	m[1][1] = d;
}

Matrix2::~Matrix2(){}

Matrix2 Matrix2::operator*(const Matrix2 rhs)
{
	Matrix2 result;

	result.m[0][0] = m[0][0] * rhs.m[0][0] + m[0][1] * rhs.m[1][0];
	result.m[0][1] = m[0][0] * rhs.m[0][1] + m[0][1] * rhs.m[1][1];

	result.m[1][0] = m[1][0] * rhs.m[0][0] + m[1][1] * rhs.m[1][0];
	result.m[1][1] = m[1][0] * rhs.m[0][1] + m[1][1] * rhs.m[1][1];

	return result;
}

Matrix2 Matrix2::transpose(Matrix2 rhs)
{
	float temp;
	temp = 0;
	
	temp = rhs.m[0][1];
	rhs.m[0][1] = rhs.m[1][0];
	rhs.m[1][0] = temp;

	return rhs;
}