#pragma once

class Vector2
{
public:
	Vector2();
	Vector2(float x, float y);
	~Vector2();

	Vector2 operator+(const Vector2& rhs);
	Vector2 operator-(const Vector2& rhs);
	Vector2 operator*(const float rhs);
	Vector2 operator/(const float rhs);
	Vector2 operator-();
	float dot(Vector2 rhs);
	float magnitude();
	float magnitude(Vector2 rhs);
	void normalise();

	float x;
	float y;
};

Vector2 operator*(float lhs, const Vector2 rhs);