#pragma once
#include "Vector2.h"
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

class Matrix2
{
public:
	MATH_DLL	Matrix2();
	MATH_DLL	Matrix2(float xx, float xy, float yy, float yx);
	MATH_DLL	~Matrix2();

	MATH_DLL	Vector2 operator*(const Vector2& rhs);
	MATH_DLL	Matrix2 operator*(const Matrix2& rhs);
	MATH_DLL	Vector2& operator[](const int rhs);
	MATH_DLL	float convertRadToDeg(float Radian);
	MATH_DLL	float convertDegToRad(float Degree);
	MATH_DLL	Matrix2 Transpose();
	MATH_DLL	float Determinant(float Det);
	MATH_DLL	bool isIdentity();
	MATH_DLL	void setRotation(const float a);
	MATH_DLL	void setScale(const float x, const float y);
	MATH_DLL	Vector2 getScale(const float x, const float y, const float z);
	MATH_DLL	void setRotationDeg(const float a);
	MATH_DLL	operator float*();

	float m[2][2];
};

