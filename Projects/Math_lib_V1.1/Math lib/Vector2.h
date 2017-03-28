#pragma once
class Vector2
{
public:
	Vector2();
	Vector2(float newX , float newY);
	~Vector2();

	Vector2 operator+(const Vector2& rhs);
	//Vector2 Add(const Vector2 & rhs);
	Vector2 operator-(const Vector2 & rhs);
	Vector2 operator*(const float rhs);
	//Vector2 Multiply(const float rhs);
	Vector2 operatorDiv(const float rhs);
	Vector2 negOperator();
	Vector2 operator+=(const Vector2& rhs);

	float x;
	float y;	
};
Vector2 operator*(float lhs, const Vector2 rhs);