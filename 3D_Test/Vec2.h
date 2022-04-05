 #pragma once

class Vec2
{
public:
	Vec2() = default;
	Vec2(float x_in, float y_in);
	Vec2 operator+(const Vec2& rhs)const;
	Vec2& operator+=(const Vec2& rhs);
	float GetX();
	float GetY();
	void SetX(Vec2& rhs);
	void SetY(Vec2& rhs);
private:
	float x;
	float y;
};