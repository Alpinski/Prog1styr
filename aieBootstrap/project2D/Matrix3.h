#pragma once
class Matrix3
{
public:
	Matrix3();
	~Matrix3();

	Matrix3(float a, float b, float c, float d, float e, float f, float g, float h, float i);
	float m[3][3];

	Matrix3 operator*(const Matrix3 rhs);
	Matrix3 transpose(Matrix3 rhs);
};