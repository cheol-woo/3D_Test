#pragma once
#include "Vec3.h"


class PubeScreenTransformer
{
public:
	PubeScreenTransformer()
		:
		xFactor(float(ScreenWidth) / 2.0f),
		yFactor(float(ScreenHeight) / 2.0f)
	{}
	Vec3& Transform(Vec3& v) const
	{
		const float zInv = 1.0f / v.z;
		v.x = (v.x * zInv + 1.0f) * xFactor;
		v.y = (-v.y * zInv + 1.0f) * yFactor;
		return v;
	}
	
private:
	float xFactor;
	float yFactor;
	float ScreenWidth = 600;
	float ScreenHeight = 600;
};
