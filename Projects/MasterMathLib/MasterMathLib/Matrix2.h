#pragma once
#include "Vector2.h"

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
	MATH_DLL	void setRotation(const float a);
	MATH_DLL	operator float*();

	float m[2][2];
};

