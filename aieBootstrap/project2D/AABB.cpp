#include "AABB.h"



AABB::AABB()
{
}


AABB::~AABB()
{
}

AABB::AABB(int min, int max)
{
	min = 9999;
	max = -min;

	for (int p = 0; p < 10; ++p)
	{
		if (p < min)
		{
			min = p;
		}
		else if (p > max)
		{
			max = p;
		}
	}
}