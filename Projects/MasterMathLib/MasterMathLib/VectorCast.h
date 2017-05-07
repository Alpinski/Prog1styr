#pragma once
#include "Vector2.h"
#include "Vector3.h"

template <class D, class S>
D CastTo(S source) {};

template<>
Vector3 CastTo(Vector2 source)
{
	return Vector3(source.x, source.y);
};

