#pragma once

#ifdef STATIC_LIB//STATIC
	#define MATH_DLL
#else//DYNAMIC
	#ifdef DLL_EXPORT
		#define MATH_DLL __declspec(dllexport)
	#else
		#define MATH_DLL __declspec(dllimport)
	#endif
#endif

class Vector3
{
public:
	MATH_DLL	Vector3();
	MATH_DLL	Vector3(float newX, float newY, float newZ);
	MATH_DLL	~Vector3();

	MATH_DLL	Vector3 operator+(const Vector3& rhs);
	MATH_DLL	Vector3 operator-(const Vector3 & rhs);
	MATH_DLL	Vector3 operator*(const float rhs);
	MATH_DLL	Vector3 posOperator();
	MATH_DLL	Vector3 operator-();
	MATH_DLL	Vector3 operator/(const float rhs);
	MATH_DLL	Vector3 operator+=(const Vector3 & rhs);
	MATH_DLL	Vector3 Normalised(Vector3 data);
	MATH_DLL	Vector3 Cross(Vector3 rhs);
	MATH_DLL	float & operator[](const int rhs);
	MATH_DLL	operator float*();
	MATH_DLL	float Magnitude();
	MATH_DLL	void Normalise();
	MATH_DLL	float Dot(Vector3 rhs);
	MATH_DLL	bool operator> (const Vector3& rhs);
	MATH_DLL	bool operator< (const Vector3& rhs);
	MATH_DLL	bool operator==(const Vector3 & rhs);
	MATH_DLL	bool operator!=(const Vector3 & rhs);
	MATH_DLL	bool operator<=(const Vector3 & rhs);
	MATH_DLL	bool operator>=(const Vector3 & rhs);

	float x;
	float y;
	float z;
};
	MATH_DLL	Vector3 operator*(float lhs, const Vector3 rhs);