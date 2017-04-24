#pragma once
#include "Vector3.h"
class Matrix3
{
public:
	Matrix3();
	Matrix3(float xx, float xy, float xz, float yx, float yy, float yz, float zx, float zy, float zz);
	~Matrix3();

	Vector3 operator*(const Vector3 & rhs);

	Matrix3 operator*(const Matrix3 & rhs);

	void setRotationX(const float a);

	void setRotationY(const float a);

	void setRotationZ(const float z);

	Vector3 & operator[](const int rhs);

	operator float*();

	float m[3][3];
};