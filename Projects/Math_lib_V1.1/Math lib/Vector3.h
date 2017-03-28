#pragma once
class Vector3
{
public:
	Vector3();
	Vector3(float newX, float newY, float newZ);
	~Vector3();

	Vector3 Translate(const Vector3& rhs);
	Vector3 Add(const Vector3 & rhs);
	Vector3 Subtract(const Vector3 & rhs);
	Vector3 Scale(float scalar);
	Vector3 Multiply(float scalar);
	Vector3 Divide(float scalar);

	float x;
	float y;
	float z;
};

 