#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
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
	//--------------------------------------------------------------------------------------
	//Constructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	Matrix2();
	//--------------------------------------------------------------------------------------
	//Constructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	Matrix2(float xx, float xy, float yy, float yx);
	//--------------------------------------------------------------------------------------
	//Deconstructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	~Matrix2();
	//--------------------------------------------------------------------------------------
	// Times matrix2 with Vector2
	//
	// Param:
	//		takes in a vector2
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector2 operator*(const Vector2 & rhs);
	//--------------------------------------------------------------------------------------
	// Times two matrix2s together
	//
	// Param:
	//		takes in a matrix2
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Matrix2 operator*(const Matrix2& rhs);
	//--------------------------------------------------------------------------------------
	//sets rotation
	//
	// Param:
	//		takes in a float
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void setRotation(const float a);
	//--------------------------------------------------------------------------------------
	//sets the scale 
	//
	// Param:
	//		takes in three floats
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void setScale(const float x, const float y);
	//--------------------------------------------------------------------------------------
	//gets the scale 
	//
	// Param:
	//		takes in three floats
	// Return:
	//		returns result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector2 getScale(const float x, const float y);
	//--------------------------------------------------------------------------------------
	//sets rotation in degrees
	//
	// Param:
	//		takes in a float
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void setRotationDeg(const float a);
	MATH_DLL	Vector2& operator[](const int rhs);
	MATH_DLL	operator float*();
	//--------------------------------------------------------------------------------------
	//converts radians to degrees
	//
	// Param:
	//		takes in a float
	// Return:
	//		returns Degree
	//--------------------------------------------------------------------------------------
	MATH_DLL	float convertRadToDeg(float Radian);
	//--------------------------------------------------------------------------------------
	//converts degrees to radians
	//
	// Param:
	//		takes in a float
	// Return:
	//		returns Radian
	//--------------------------------------------------------------------------------------
	MATH_DLL	float convertDegToRad(float Degree);

	//--------------------------------------------------------------------------------------
	// interchanges each row and the corresponding column.
	//
	// Param:
	//		none
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void Transpose();
	MATH_DLL	float Determinant(float Det);
	//--------------------------------------------------------------------------------------
	//Checks if matrix is an identity matrix
	//
	// Param:
	//		none
	// Return:
	//		returns true or false
	//--------------------------------------------------------------------------------------
	MATH_DLL	bool isIdentity();

	float m[2][2];
};

