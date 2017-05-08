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
	//--------------------------------------------------------------------------------------
	//Constructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3();
	//--------------------------------------------------------------------------------------
	//Constructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3(float newX, float newY, float newZ);
	//--------------------------------------------------------------------------------------
	//Deconstructor
	//--------------------------------------------------------------------------------------
	MATH_DLL	~Vector3();
	//--------------------------------------------------------------------------------------
	// Adds two vector3s together
	//
	// Param:
	//		takes in a vector3
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 operator+(const Vector3& rhs);
	//--------------------------------------------------------------------------------------
	// Subtracts two vector3s together
	//
	// Param:
	//		takes in a vector3
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 operator-(const Vector3& rhs);
	//--------------------------------------------------------------------------------------
	// times two vector3s together
	//
	// Param:
	//		takes in a vector3 
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 operator*(const float rhs);
	//--------------------------------------------------------------------------------------
	// takes two equal-length sequences of numbers and returns a single number.
	//
	// Param:
	//		takes in a vector3
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	float Dot(Vector3& rhs);
	//--------------------------------------------------------------------------------------
	// returns true or false depending on if the number is greater than the other number
	//
	// Param:
	//		input: takes a vector3
	// Return:
	//		returns true or false
	//--------------------------------------------------------------------------------------
	MATH_DLL	bool operator> (const Vector3& rhs);
	//--------------------------------------------------------------------------------------
	// returns true or false depending on if the number is less than the other number
	//
	// Param:
	//		takes in a vector3 
	// Return:
	//		returns true or false
	//--------------------------------------------------------------------------------------
	MATH_DLL	bool operator< (const Vector3& rhs);
	//--------------------------------------------------------------------------------------
	// returns true or false depending on if the number is equal to the other number
	//
	// Param:
	//		takes in a vector3
	// Return:
	//		returns true or false
	//--------------------------------------------------------------------------------------
	MATH_DLL	bool operator==(const Vector3& rhs);
	//--------------------------------------------------------------------------------------
	// returns true or false depending on if the number does not equal to the other number
	//
	// Param:
	//		takes in a vector3
	// Return:
	//		returns true or false
	//--------------------------------------------------------------------------------------
	MATH_DLL	bool operator!=(const Vector3& rhs);
	//--------------------------------------------------------------------------------------
	// returns true or false depending on if the number greater than or equal to the other number
	//
	// Param:
	//		takes in a vector3
	// Return:
	//		returns true or false
	//--------------------------------------------------------------------------------------
	MATH_DLL	bool operator<=(const Vector3& rhs);
	//--------------------------------------------------------------------------------------
	// returns true or false depending on if the number less than or equal to the other number
	//
	// Param:
	//		takes in a vector3
	// Return:
	//		returns true or false
	//--------------------------------------------------------------------------------------
	MATH_DLL	bool operator>=(const Vector3& rhs);
	//--------------------------------------------------------------------------------------
	//the cross product is a 
	//
	// Param:
	//		takes in a vector3
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 Cross(Vector3& rhs);
	//--------------------------------------------------------------------------------------
	//How large an object is
	//
	// Param:
	//		none
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	float Magnitude();
	//--------------------------------------------------------------------------------------
	//square of a magnitude
	//
	// Param:
	//		none
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	float sqrMagnitude();
	//--------------------------------------------------------------------------------------
	////multiply by a factor that makes an integral equal to a desired value
	//
	// Param:
	//		Takes in a Vector4
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	void Normalise();
	//--------------------------------------------------------------------------------------
	//normalise the magnitude
	//
	// Param:
	//		Takes in a Vector3
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 Normalised(Vector3& data);
	//--------------------------------------------------------------------------------------
	//calculates the distance between two vector4s
	//
	// Param:
	//		Takes in a Vector3
	// Return:
	//		returns the dist
	//--------------------------------------------------------------------------------------
	MATH_DLL	float Distance(Vector3& rhs);
	//--------------------------------------------------------------------------------------
	//Divides two vectors
	//
	// Param:
	//		Takes in a float
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 operator/(const float rhs);

	//--------------------------------------------------------------------------------------
	//positive number
	//
	// Param:
	//		none
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 posOperator();
	//--------------------------------------------------------------------------------------
	//negative number
	//
	// Param:
	//		none
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 operator-();
	//--------------------------------------------------------------------------------------
	//short for x = x + y
	//
	// Param:
	//		Takes in a Vector4
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 operator+=(const Vector3& rhs);	
	MATH_DLL	float& operator[](const int rhs);	
	MATH_DLL	operator float*();
	//--------------------------------------------------------------------------------------
	//calculates the minimum of the vector3
	//
	// Param:
	//		Takes in a Vector3
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 min(const Vector3& rhs);
	//--------------------------------------------------------------------------------------
	//calculates the maximum of the vector3
	//
	// Param:
	//		Takes in a Vector3
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 max(const Vector3& rhs);
	//--------------------------------------------------------------------------------------
	//moves the point to the nearest available value.
	//
	// Param:
	//		Takes in two Vector4s
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 clamp(Vector3& min, Vector3 & max);
	//--------------------------------------------------------------------------------------
	//Swizzles the elements of the vector, assigning differing values depending on the variables in the function name
	//
	// Param:
	//		none
	// Return:
	//		returns the result
	//--------------------------------------------------------------------------------------
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
//--------------------------------------------------------------------------------------
// times a float and a vector3 together
//
// Param:
//		takes in a vector3
// Return:
//		returns the result
//--------------------------------------------------------------------------------------
	MATH_DLL	Vector3 operator*(float lhs, const Vector3& rhs);