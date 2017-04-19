#pragma once
class Matrix2
{
public:
	Matrix2();
	~Matrix2();

	Matrix2(float a, float b, float c, float d);
	float m[2][2];

	Matrix2 operator*(const Matrix2 rhs);
	Matrix2 transpose(Matrix2 rhs);

};

