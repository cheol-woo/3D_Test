#include"Vec2.h"
#include<iostream>

int main()
{
	Vec2 dude(1.5f, 2.3f);
	Vec2 poo(1.2f, 2.5f);
	Vec2 sum=dude+poo;
	std::cout << "dude.GetX() = " << dude.GetX() << std::endl;
	std::cout << "dude.GetY() = " << dude.GetY() << std::endl;
	std::cout << "poo.GetX() = " << poo.GetX() << std::endl;
	std::cout << "poo.GetY() = " << poo.GetY() << std::endl;
	std::cout << "sum.GetX() = " << sum.GetX() << std::endl;
	std::cout << "sum.GetY() = " << sum.GetY() << std::endl;
	dude.SetX(poo);
	dude.SetY(poo);
	std::cout << "dude.GetX() = " << dude.GetX() << std::endl;
	std::cout << "dude.GetY() = " << dude.GetY() << std::endl;
}