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

class Vector2
{
public:
	MATH_DLL	Vector2();
	MATH_DLL	Vector2(float newX , float newY);
	MATH_DLL	~Vector2();

	MATH_DLL	Vector2 operator+(const Vector2& rhs);
	MATH_DLL	Vector2 operator-(const Vector2 & rhs);
	MATH_DLL	Vector2 operator*(const float rhs);
	MATH_DLL	Vector2 operatorDiv(const float rhs);
	MATH_DLL	Vector2 posOperator();
	MATH_DLL	Vector2 operator-();
	MATH_DLL	Vector2 operator+=(const Vector2& rhs);
	MATH_DLL	Vector2 Normalised(Vector2 data);
	MATH_DLL	float & operator[](const int rhs);
	MATH_DLL	operator float*();
	MATH_DLL	float Magnitude();
	MATH_DLL	void Normalise();
	MATH_DLL	float Dot(Vector2 rhs);
	
	float x;
	float y;
};

MATH_DLL Vector2 operator*(float lhs, const Vector2 rhs);
