#pragma once
#include "Vector3.h"

class Matrix3
{
public:
	Matrix3();
	Matrix3(float xx, float xy, float xz, float yy, float yx, float yz, float zz, float zx, float zy);
	~Matrix3();

	Vector3 operator*(const Vector3 & rhs);

	Matrix3 operator*(const Matrix3 & rhs);

	float m[3][3];
};

