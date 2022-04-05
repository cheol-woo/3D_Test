#include<iostream>
#include<cmath>
#include"Circle.h"

void Circle::DrawCircle(int xStart, int xEnd, int yStart, int yEnd, int r, int g, int b)
{
	double xWidth = xEnd - xStart;
	double radius = xWidth / 2;
	double theta = 0;
	double incrementTheta = radius * cos(delTheta);
	for (double i = xStart; i < xEnd; i++, theta = theta + PI / xWidth)
	{
		double yUpper = radius * sin(theta) + yStart;
		double yLower = -radius * sin(theta) + yStart;
		for (double j = yLower; j < yUpper; j++)
		{
			std::cout << "x_upper  " << i << "=" << std::round(xStart + radius * cos(theta)) << "y_upper" << j << "=" << yUpper << std::endl;
			std::cout << "x_upper  " << i << "=" << xStart + radius * cos(theta)<< "y_upper" << j << "=" << yUpper << std::endl;
			//std::cout << "x_lower" << i << "=" << xStart + radius * cos(theta) << "y_lower" << j << "=" << yLower << std::endl;
			std::cout << "    " << std::endl;
		}
	}   
	/*
	for (int i = xStart - radius; i < xStart + radius; i++)// Draw x-axis
	{
		gfx.PutPixel(i, yStart, 255, 255, 255);
	}
	for (int j = yStart - radius; j < yStart + radius; j++)//Draw y-axis
	{
		gfx.PutPixel(xStart, j, 255, 255, 255);
	}
	if (incrementTheta < 0)
	{
		for (int i = xStart; i > xStart + incrementTheta; i--)
		{
			int y = tan(delTheta) * (i - xStart) + yStart;
			gfx.PutPixel(i, y, 255, 0, 0);
		}
	}
	else
	{
		for (int i = xStart; i < xStart + incrementTheta; i++)
		{
			int y = tan(delTheta) * (i - xStart) + yStart;
			gfx.PutPixel(i, y, 255, 0, 0);
		}
	}
	*/
}

