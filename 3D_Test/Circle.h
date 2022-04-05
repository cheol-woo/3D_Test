#pragma once

class Circle
{
public:
	void DrawCircle(int xStart, int xEnd, int yStart, int yEnd, int r, int g, int b);
private:
	const double PI = 3.141592;
	double delTheta = 0.0f;
};