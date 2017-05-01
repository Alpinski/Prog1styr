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


class Vector4
{
public:
	MATH_DLL	Vector4();
	MATH_DLL	Vector4(float newX, float newY, float newZ, float newW);
	MATH_DLL	~Vector4();

	MATH_DLL	Vector4 operator+(const Vector4 & rhs);
	MATH_DLL	Vector4 operator-(const Vector4 & rhs);
	MATH_DLL	Vector4 operator*(float rhs);
	MATH_DLL	Vector4 posOperator();
	MATH_DLL	Vector4 operator-();
	MATH_DLL	Vector4 operator/(const float rhs);
	MATH_DLL	Vector4 operator+=(const Vector4 & rhs);
	MATH_DLL	Vector4 Cross(Vector4 rhs);
	MATH_DLL	float & operator[](const int rhs);
	MATH_DLL	operator float*();
	MATH_DLL	float Magnitude();
	MATH_DLL	void Normalise();
	MATH_DLL	float Dot(Vector4 rhs);
	
	
	


	float x;
	float y;
	float z;
	float w;
};

	MATH_DLL	Vector4 operator*(float lhs, const Vector4 rhs);