#pragma once
#include "Vector4.h"

class Matrix4
{
public:
	Matrix4();
	Matrix4(float xx, float xy, float xz, float xw, float yx, float yy, float yz, float yw, float zx, float zy, float zz, float zw, float wx, float wy, float wz, float ww);
	~Matrix4();

	Vector4 operator*(const Vector4 & rhs);
	Matrix4 operator*(const Matrix4 & rhs);
	void setRotationX(const float a);
	void setRotationY(const float a);
	void setRotationZ(const float a);
	Vector4 & operator[](const int rhs);
	operator float*();
	float m[4][4];
};

