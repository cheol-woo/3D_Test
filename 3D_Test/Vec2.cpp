#include "Vec2.h"

Vec2::Vec2(float x_in, float y_in)
	:
	x(x_in),
	y(y_in)
{
}

Vec2 Vec2::operator+(const Vec2& rhs) const
{
	return Vec2(x+rhs.x,y+rhs.y);
}

Vec2& Vec2::operator+=(const Vec2& rhs)
{
	return *this = *this + rhs;
	// TODO: insert return statement here
}

float Vec2::GetX()
{
	return x;
}

float Vec2::GetY()
{
	return y;
}

void Vec2::SetX(Vec2& rhs)
{
	x=rhs.x;
}

void Vec2::SetY(Vec2& rhs)
{
	y = rhs.y;
}
