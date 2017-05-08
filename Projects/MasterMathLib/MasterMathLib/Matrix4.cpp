#include "Matrix4.h"
#include <cmath>
//zcx
Matrix4::Matrix4()
{
	m[0][0] = 1;
	m[1][0] = 0;
	m[2][0] = 0;
	m[3][0] = 0;
	m[0][1] = 0;
	m[1][1] = 1;
	m[2][1] = 0;
	m[3][1] = 0;
	m[0][2] = 0;
	m[1][2] = 0;
	m[2][2] = 1;
	m[3][2] = 0;
	m[0][3] = 0;
	m[1][3] = 0;
	m[2][3] = 0;
	m[3][3] = 1;
}

Matrix4::Matrix4(float xx, float xy, float xz, float xw, float yx, float yy, float yz, float yw, float zx, float zy, float zz, float zw, float wx, float wy, float wz, float ww)
{
	m[0][0] = xx;
	m[0][1] = xy;
	m[0][2] = xz;
	m[0][3] = xw;
	m[1][0] = yx;
	m[1][1] = yy;
	m[1][2] = yz;
	m[1][3] = yw;
	m[2][0] = zx;
	m[2][1] = zy;
	m[2][2] = zz;
	m[2][3] = zw;
	m[3][0] = wx;
	m[3][1] = wy;
	m[3][2] = wz;
	m[3][3] = ww;
}

Matrix4::~Matrix4()
{
}

Vector4 Matrix4::operator*(const Vector4& rhs)
{
	Vector4 result;

	result.x = m[0][0] * rhs.x + m[1][0] * rhs.y + m[2][0] * rhs.z + m[3][0] * rhs.w;
	result.y = m[0][1] * rhs.x + m[1][1] * rhs.y + m[2][1] * rhs.z + m[3][1] * rhs.w;
	result.z = m[0][2] * rhs.x + m[1][2] * rhs.y + m[2][2] * rhs.z + m[3][2] * rhs.w;
	result.w = m[0][3] * rhs.x + m[1][3] * rhs.y + m[2][3] * rhs.z + m[3][3] * rhs.w;

	return result;
}

Matrix4 Matrix4::operator*(const Matrix4& rhs)
{
	Matrix4 result;
	
	result.m[0][0] = m[0][0] * rhs.m[0][0] + m[1][0] * rhs.m[0][1] + m[2][0] * rhs.m[0][2] + m[3][0] * rhs.m[0][3];
	result.m[1][0] = m[0][0] * rhs.m[1][0] + m[1][0] * rhs.m[1][1] + m[2][0] * rhs.m[1][2] + m[3][0] * rhs.m[1][3];
	result.m[2][0] = m[0][0] * rhs.m[2][0] + m[1][0] * rhs.m[2][1] + m[2][0] * rhs.m[2][2] + m[3][0] * rhs.m[2][3];
	result.m[3][0] = m[0][0] * rhs.m[3][0] + m[1][0] * rhs.m[3][1] + m[2][0] * rhs.m[3][2] + m[3][0] * rhs.m[3][3];
																						
	result.m[0][1] = m[0][1] * rhs.m[0][0] + m[1][1] * rhs.m[0][1] + m[2][1] * rhs.m[0][2] + m[3][1] * rhs.m[0][3];
	result.m[1][1] = m[0][1] * rhs.m[1][0] + m[1][1] * rhs.m[1][1] + m[2][1] * rhs.m[1][2] + m[3][1] * rhs.m[1][3];
	result.m[2][1] = m[0][1] * rhs.m[2][0] + m[1][1] * rhs.m[2][1] + m[2][1] * rhs.m[2][2] + m[3][1] * rhs.m[2][3];
	result.m[3][1] = m[0][1] * rhs.m[3][0] + m[1][1] * rhs.m[3][1] + m[2][1] * rhs.m[3][2] + m[3][1] * rhs.m[3][3];
																						
	result.m[0][2] = m[0][2] * rhs.m[0][0] + m[1][2] * rhs.m[0][1] + m[2][2] * rhs.m[0][2] + m[3][2] * rhs.m[0][3];
	result.m[1][2] = m[0][2] * rhs.m[1][0] + m[1][2] * rhs.m[1][1] + m[2][2] * rhs.m[1][2] + m[3][2] * rhs.m[1][3];
	result.m[2][2] = m[0][2] * rhs.m[2][0] + m[1][2] * rhs.m[2][1] + m[2][2] * rhs.m[2][2] + m[3][2] * rhs.m[2][3];
	result.m[3][2] = m[0][2] * rhs.m[2][0] + m[1][2] * rhs.m[3][1] + m[2][2] * rhs.m[3][2] + m[3][2] * rhs.m[3][3];
																						
	result.m[0][3] = m[0][3] * rhs.m[0][0] + m[1][3] * rhs.m[0][1] + m[2][3] * rhs.m[0][2] + m[3][3] * rhs.m[0][3];
	result.m[1][3] = m[0][3] * rhs.m[1][0] + m[1][3] * rhs.m[1][1] + m[2][3] * rhs.m[1][2] + m[3][3] * rhs.m[1][3];
	result.m[2][3] = m[0][3] * rhs.m[2][0] + m[1][3] * rhs.m[2][1] + m[2][3] * rhs.m[2][2] + m[3][3] * rhs.m[2][3];
	result.m[3][3] = m[0][3] * rhs.m[3][0] + m[1][3] * rhs.m[3][1] + m[2][3] * rhs.m[3][2] + m[3][3] * rhs.m[3][3];

	return result;
}

void Matrix4::setRotationX(const float a)
{
	m[0][0] = 1;
	m[1][0] = 0;
	m[2][0] = 0;
	m[3][0] = 0;
	m[0][1] = 0;
	m[1][1] = cosf(a);
	m[2][1] = -sinf(a);
	m[3][1] = 0;
	m[0][2] = 0;
	m[1][2] = sinf(a);
	m[2][2] = cosf(a);
	m[3][2] = 0;
	m[0][3] = 0;
	m[1][3] = 0;
	m[2][3] = 0;
	m[3][3] = 1;
}

void Matrix4::setRotationY(const float a)
{

	m[0][0] = cosf(a);
	m[1][0] = 0;
	m[2][0] = sinf(a);
	m[3][0] = 0;
	m[0][1] = 0;
	m[1][1] = 1;
	m[2][1] = 0;
	m[3][1] = 0;
	m[0][2] = -sinf(a);
	m[1][2] = 0;
	m[2][2] = cosf(a);
	m[3][2] = 0;
	m[0][3] = 0;
	m[1][3] = 0;
	m[2][3] = 0;
	m[3][3] = 1;
}

void Matrix4::setRotationZ(const float a)
{
	m[0][0] = cosf(a);
	m[1][0] = -sinf(a);
	m[2][0] = 0;
	m[3][0] = 0;
	m[0][1] = sinf(a);
	m[1][1] = cosf(a);
	m[2][1] = 0;
	m[3][1] = 0;
	m[0][2] = 0;
	m[1][2] = 0;
	m[2][2] = 1;
	m[3][2] = 0;
	m[0][3] = 0;
	m[1][3] = 0;
	m[2][3] = 0;
	m[3][3] = 1;
}

void Matrix4::setPosition(const Vector3& rhs)
{
	m[0][0] = 1;
	m[1][0] = 0;
	m[2][0] = 0;
	m[3][0] = 0;
	m[0][1] = 0;
	m[1][1] = 1;
	m[2][1] = 0;
	m[3][1] = 0;
	m[0][2] = 0;
	m[1][2] = 0;
	m[2][2] = 1;
	m[3][2] = 0;
	m[0][3] = rhs.x;
	m[1][3] = rhs.y;
	m[2][3] = rhs.z;
	m[3][3] = 1;
}

Vector3 Matrix4::getPosition(const float x, const float y, const float z)
{
	Vector3 result;
	result.x = m[0][3];
	result.y = m[1][3];
	result.z = m[2][3];
	return result;
}

void Matrix4::setScale(const float x, const float y, const float z)
{
	m[0][0] = x;
	m[1][0] = 0;
	m[2][0] = 0;
	m[3][0] = 0;
	m[0][1] = 0;
	m[1][1] = y;
	m[2][1] = 0;
	m[3][1] = 0;
	m[0][2] = 0;
	m[1][2] = 0;
	m[2][2] = z;
	m[3][2] = 0;
	m[0][3] = 0;
	m[1][3] = 0;
	m[2][3] = 0;
	m[3][3] = 1;
}

Vector3 Matrix4::getScale(const float x, const float y, const float z)
{
	Vector3 result;
	result.x = m[0][0];
	result.y = m[1][1];
	result.z = m[2][2];
	return result;
}

void Matrix4::setRotationDegX(const float a)
{
	float rad = convertDegToRad(a);
	setRotationX(rad);
}

void Matrix4::setRotationDegY(const float a)
{
	float rad = convertDegToRad(a);
	setRotationY(rad);
}

void Matrix4::setRotationDegZ(const float a)
{
	float rad = convertDegToRad(a);
	setRotationZ(rad);
}

Vector4& Matrix4::operator[](const int rhs)
{
	return*(Vector4*)m[rhs];
}

Matrix4::operator float*()
{
	return &m[0][0];
}

float Matrix4::convertRadToDeg(float Radian)
{
	float Degree;
	Degree = Radian * (180.0f / M_PI);
	return Degree;
}

float Matrix4::convertDegToRad(float Degree)
{
	float Radian;
	Radian = Degree * (M_PI / 180.0f);
	return Radian;
}


Matrix4 Matrix4::Transpose()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			m[i][j] = m[j][i];
		}
	}
}

float Matrix4::Determinant(float Det)
{
	float A = m[0][0];
	float B = m[0][0];
	float C = m[1][0];
	float D = m[2][0];
	float E = m[3][0];
	float F = m[0][1];
	float G = m[1][1];
	float H = m[2][1];
	float I = m[3][1];
	float J = m[0][2];
	float K = m[1][2];
	float L = m[2][2];
	float M = m[3][2];
	float N = m[0][3];
	float O = m[1][3];
	float P = m[2][3];
	float Q = m[3][3];

	Det = A*(F*K*P - F*L*O - G*J*P + G*L*N + H*J*O - H*K*N)
		- B*(E*K*P - E*L*O - G*I*P + G*L*M + H*I*O - H*K*M)
		+ C*(E*J*P - E*L*N - F*I*P + F*L*M + H*I*N - H*J*M)
		- D*(E*J*O - E*K*N - F*I*O + F*K*M + G*I*N - G*J*M);

	return Det;
}

bool Matrix4::isIdentity()
{
	int count = 0;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (i == j && m[i][j] == 1)
				++count;
			else if (i != j && m[i][j] == 0)
				++count;
		}
	}
	if (count == 16)
	{
		return true;
	}

	return false;
}