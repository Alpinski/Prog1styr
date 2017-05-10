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
	//--------------------------------------------------------------------------------------
	//Constructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	Matrix4();
	//--------------------------------------------------------------------------------------
	//Constructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	Matrix4(float xx, float xy, float xz, float xw, float yx, float yy, float yz, float yw, float zx, float zy, float zz, float zw, float wx, float wy, float wz, float ww);
	//--------------------------------------------------------------------------------------
	//Deconstructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	~Matrix4();
	//--------------------------------------------------------------------------------------
	// Times matrix4 with Vector4
	//
	// Param:
	//		takes in a vector4
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector4 operator*(const Vector4 & rhs);
	//--------------------------------------------------------------------------------------
	// Times two matrix4s together
	//
	// Param:
	//		takes in a matrix4
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Matrix4 operator*(const Matrix4 & rhs);
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
	MATH_DLL	void setRotationZ(const float a);
	//--------------------------------------------------------------------------------------
	//sets the position 
	//
	// Param:
	//		takes in a vector3
	// Return:
	//		none
	//--------------------------------------------------------------------------------------
	MATH_DLL	void setPosition(const Vector3& rhs);
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
	MATH_DLL	void setScale(const float x, const float y, const float z);
	//--------------------------------------------------------------------------------------
	//gets the scale 
	//
	// Param:
	//		takes in three floats
	// Return:
	//		returns result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 getScale(const float x, const float y, const float z);
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
	MATH_DLL	Vector4 & operator[](const int rhs);
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
	MATH_DLL	float Determinant(const float Det);
	//--------------------------------------------------------------------------------------
	//Checks if matrix is an identity matrix
	//
	// Param:
	//		none
	// Return:
	//		returns true or false
	//--------------------------------------------------------------------------------------
	MATH_DLL	bool isIdentity();
	MATH_DLL	void lookAt(Vector3 from, const Vector3 target, Vector3 up);


	float m[4][4];
};