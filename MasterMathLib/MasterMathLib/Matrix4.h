#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include "Vector4.h"
#include "Vector3.h"

#ifdef STATIC_LIB//STATIC
	#define MATH_DLL
#else//DYNAMIC
	#ifdef DLL_EXPORT
		#define MATH_DLL __declspec(dllexport)
	#else
		#define MATH_DLL __declspec(dllimport)
	#endif
#endif

class Matrix4
{
public:
	MATH_DLL	Matrix4();
	MATH_DLL	Matrix4(float xx, float xy, float xz, float xw, float yx, float yy, float yz, float yw, float zx, float zy, float zz, float zw, float wx, float wy, float wz, float ww);
	MATH_DLL	~Matrix4();

	MATH_DLL	Vector4 operator*(const Vector4 & rhs);
	MATH_DLL	Matrix4 operator*(const Matrix4 & rhs);
	MATH_DLL	Vector4 & operator[](const int rhs);
	MATH_DLL	float convertRadToDeg(float Radian);
	MATH_DLL	float convertDegToRad(float Degree);
	MATH_DLL	void setRotationX(const float a);
	MATH_DLL	void setRotationY(const float a);
	MATH_DLL	void setRotationZ(const float a);
	MATH_DLL	void setPosition(const Vector3& rhs);
	MATH_DLL	Vector3 getPosition(const float x, const float y, const float z);
	MATH_DLL	void setScale(const float x, const float y, const float z);
	MATH_DLL	Vector3 getScale(const float x, const float y, const float z);
	MATH_DLL	void Transpose();
	MATH_DLL	float Determinant(const float Det);
	MATH_DLL	bool isIdentity();
	MATH_DLL	void lookAt(Vector3 from, const Vector3 target, Vector3 up);
	MATH_DLL	void setRotationDegX(const float a);
	MATH_DLL	void setRotationDegY(const float a);
	MATH_DLL	void setRotationDegZ(const float a);
	MATH_DLL	operator float*();

	float m[4][4];
};