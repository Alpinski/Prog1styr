#pragma once
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

#ifdef STATIC_LIB//STATIC
	#define MATH_DLL
#else//DYNAMIC
	#ifdef DLL_EXPORT
		#define MATH_DLL __declspec(dllexport)
	#else
		#define MATH_DLL __declspec(dllimport)
	#endif
#endif

template <class D, class S>

D CastTo(S source) {};

template <>
Vector3  CastTo(Vector2 source)
{
	return Vector3(source.x, source.y, 0);
}

template<>
Vector2 CastTo(Vector3 source)
{
	return Vector2(source.x, source.y);
}

template <>
Vector4 CastTo(Vector2 source)
{
	return Vector4(source.x, source.y, 0, 0);
}

template <>
Vector2 CastTo(Vector4 source)
{
	return Vector2(source.x, source.y);
}

template <>
Vector3 CastTo(Vector4 source)
{
	return Vector3(source.x, source.y, source.z);
}

template <>
Vector4 CastTo(Vector3 source)
{
	return Vector4(source.x, source.y, source.z, 0);
}