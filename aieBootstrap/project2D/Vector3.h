#pragma once

class Vector3
{
public:
	Vector3();
	Vector3(float x, float y, float z);
	~Vector3();

	Vector3 operator+(const Vector3& rhs);
	Vector3 operator-(const Vector3& rhs);
	Vector3 operator*(const float rhs);
	Vector3 operator/(const float rhs);
	Vector3 operator-();
	float dot(Vector3 rhs);
	Vector3 cross(Vector3 rhs);
	float magnitude();
	float magnitude(Vector3 rhs);
	void normalise();

	float x;
	float y;
	float z;
};

Vector3 operator*(float lhs, const Vector3 rhs);