#pragma once
class Matrix4
{
public:
	Matrix4();
	~Matrix4();

	Matrix4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p);
	float m[4][4];

	Matrix4 operator*(const Matrix4 rhs);
	Matrix4 transpose(Matrix4 rhs);
};