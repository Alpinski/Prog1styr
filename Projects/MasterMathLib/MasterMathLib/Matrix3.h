#pragma once
#include "Vector3.h"
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

class Matrix3
{
public:
	MATH_DLL	Matrix3();
	MATH_DLL	Matrix3(float xx, float xy, float xz, float yx, float yy, float yz, float zx, float zy, float zz);
	MATH_DLL	~Matrix3();

	MATH_DLL	Vector3 operator*(const Vector3 & rhs);
	MATH_DLL	Matrix3 operator*(const Matrix3 & rhs);
	MATH_DLL	Vector3 & operator[](const int rhs);
	MATH_DLL	float convertRadToDeg(float Radian);
	MATH_DLL	float convertDegToRad(float Degree);
	MATH_DLL	void setRotationX(const float a);
	MATH_DLL	void setRotationY(const float a);
	MATH_DLL	void setRotationZ(const float z);
	MATH_DLL	void setRotationDegX(const float a);
	MATH_DLL	void setRotationDegY(const float a);
	MATH_DLL	void setRotationDegZ(const float a);
	MATH_DLL	void setPosition(const Vector2& rhs);
	MATH_DLL	void setScale(const float x, const float y);
	MATH_DLL	operator float*();

	float m[3][3];
};

