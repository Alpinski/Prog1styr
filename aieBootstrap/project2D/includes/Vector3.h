#pragma once
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
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
	MATH_DLL	Vector3 operator-(const Vector3& rhs);
	MATH_DLL	Vector3 operator*(const float rhs);
	MATH_DLL	Vector3 posOperator();
	MATH_DLL	Vector3 operator-();
	MATH_DLL	Vector3 operator/(const float rhs);
	MATH_DLL	Vector3 operator+=(const Vector3& rhs);
	MATH_DLL	Vector3 Normalised(Vector3& data);
	MATH_DLL	Vector3 Cross(Vector3& rhs);
	MATH_DLL	Vector3 min(const Vector3& rhs);
	MATH_DLL	Vector3 max(const Vector3& rhs);
	MATH_DLL	Vector3 clamp(Vector3& min, Vector3 & max);
	MATH_DLL	float& operator[](const int rhs);	
	MATH_DLL	operator float*();
	MATH_DLL	float Magnitude();
	MATH_DLL	float sqrMagnitude();
	MATH_DLL	void Normalise();
	MATH_DLL	float Distance(Vector3& rhs);
	MATH_DLL	float Dot(Vector3& rhs);
	MATH_DLL	bool operator> (const Vector3& rhs);
	MATH_DLL	bool operator< (const Vector3& rhs);
	MATH_DLL	bool operator==(const Vector3& rhs);
	MATH_DLL	bool operator!=(const Vector3& rhs);
	MATH_DLL	bool operator<=(const Vector3& rhs);
	MATH_DLL	bool operator>=(const Vector3& rhs);

	// Do you even swizzle
	MATH_DLL	Vector3 xxx();
	MATH_DLL	Vector3 xxy();
	MATH_DLL	Vector3 xxz();
	MATH_DLL	Vector3 xyx();
	MATH_DLL	Vector3 xyy();
	MATH_DLL	Vector3 xyz();
	MATH_DLL	Vector3 xzx();
	MATH_DLL	Vector3 xzy();
	MATH_DLL	Vector3 xzz();
	MATH_DLL	Vector3 yxx();
	MATH_DLL	Vector3 yxy();
	MATH_DLL	Vector3 yxz();
	MATH_DLL	Vector3 yyx();
	MATH_DLL	Vector3 yyy();
	MATH_DLL	Vector3 yyz();
	MATH_DLL	Vector3 yzx();
	MATH_DLL	Vector3 yzy();
	MATH_DLL	Vector3 yzz();
	MATH_DLL	Vector3 zxx();
	MATH_DLL	Vector3 zxy();
	MATH_DLL	Vector3 zxz();
	MATH_DLL	Vector3 zyx();
	MATH_DLL	Vector3 zyy();
	MATH_DLL	Vector3 zyz();
	MATH_DLL	Vector3 zzx();
	MATH_DLL	Vector3 zzy();
	MATH_DLL	Vector3 zzz();

	float x;
	float y;
	float z;
};
	MATH_DLL	Vector3 operator*(float lhs, const Vector3& rhs);