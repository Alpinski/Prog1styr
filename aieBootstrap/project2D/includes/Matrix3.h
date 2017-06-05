#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include "Vector3.h"
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

class Matrix3
{
public:
	//--------------------------------------------------------------------------------------
	//Constructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	Matrix3();
	//--------------------------------------------------------------------------------------
	//Constructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	Matrix3(float xx, float xy, float xz, float yx, float yy, float yz, float zx, float zy, float zz);
	//--------------------------------------------------------------------------------------
	//Deconstructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	~Matrix3();
	//--------------------------------------------------------------------------------------
	// Times matrix3 with Vector3
	//
	// Param:
	//		takes in a vector3
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 operator*(const Vector3 & rhs);
	//--------------------------------------------------------------------------------------
	// Times two matrix3s together
	//
	// Param:
	//		takes in a matrix3
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Matrix3 operator*(const Matrix3 & rhs);
	//--------------------------------------------------------------------------------------
	//sets rotation for the x axis
	//
	// Param:
	//		takes in a float
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void setRotationX(const float a);
	//--------------------------------------------------------------------------------------
	//sets rotation for the y axis
	//
	// Param:
	//		takes in a float
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void setRotationY(const float a);
	//--------------------------------------------------------------------------------------
	//sets rotation for the z axis
	//
	// Param:
	//		takes in a float
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void setRotationZ(const float z);
	//--------------------------------------------------------------------------------------
	//sets the position 
	//
	// Param:
	//		takes in a vector2
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void setPosition(const Vector2& rhs);
	//--------------------------------------------------------------------------------------
	//gets the position 
	//
	// Param:
	//		takes in three floats
	// Return:
	//		returns result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 getPosition(const float x, const float y, const float z);
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
	MATH_DLL	Vector3 getScale();
	//--------------------------------------------------------------------------------------
	//sets rotation for x axis in degrees
	//
	// Param:
	//		takes in a float
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void setRotationDegX(const float a);
	//--------------------------------------------------------------------------------------
	//sets rotation for y axis in degrees
	//
	// Param:
	//		takes in a float
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void setRotationDegY(const float a);
	//--------------------------------------------------------------------------------------
	//sets rotation for z axis in degrees
	//
	// Param:
	//		takes in a float
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void setRotationDegZ(const float a);
	MATH_DLL	Vector3 & operator[](const int rhs);
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

	float m[3][3];
};

