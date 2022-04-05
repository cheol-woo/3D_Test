#include<iostream>
#include"Vec2.h"
#include"Vec3.h"
#include"Mat2.h"
#include"Mat3.h"
#include"Cube.h"
#include"IndexedLineList.h"
//#include<gdiplustypes.h>

Vec2 ObjVec2_1(0.5, 0.5);
Vec2 ObjVec2_2(2.5, 1.5);
Vec3 ObjVec3_1(0.5, 1.0, 2.0);
Vec3 ObjVec3_2(1.5, 1.5, 2.5);
Mat3 ObjMat3;
Mat3 ObjMat3OfX;
Mat3 ObjMat3OfY;
Mat3 ObjMat3OfZ;
Cube ObjCube(1.0);

int main()
{
	auto Sum = ObjVec2_1 + ObjVec2_2;
	auto Product = ObjVec2_1 * ObjVec2_2;
	auto Sub = ObjVec2_1 - ObjVec2_2;
	
	auto SumOfVec3 = ObjVec3_1 + ObjVec3_2;

	auto lines = ObjCube.GetLines();
	std::cout << Sum.x << std::endl;
	std::cout << Sum.y << std::endl;
	std::cout << -ObjVec2_1.x << std::endl;
	std::cout << Product << std::endl;
	std::cout << Sub.x << std::endl;
	std::cout << Sub.y << std::endl;

	std::cout << SumOfVec3.x << std::endl;
	std::cout << SumOfVec3.y << std::endl;
	std::cout << SumOfVec3.z << std::endl;
	int x=10;
	ObjMat3 = Mat3::RotationX(0.2);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "element["<<i<<"]"<<"["<<j<<"]"<<ObjMat3.elements[i][j] << std::endl;
		}
	}
	auto ProductOfMatrix = Mat3::RotationX(0.2) * Mat3::RotationY(0.3) * Mat3::RotationZ(0.5);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "element[" << i << "]" << "[" << j << "]" << ProductOfMatrix.elements[i][j] << std::endl;
		}
	}
	for (auto& v : lines.vertices)
	{
		std::cout << "vertices.x =" << v.x << std::endl;
		std::cout << "vertices.y =" << v.y << std::endl;
		std::cout << "vertices.z =" << v.z << std::endl;
	}
	for (auto i = lines.indices.cbegin(),
		end = lines.indices.cend();
		i != end; std::advance(i, 2))
	{
		std::cout << "indices [" << *i << "] indices [" << *std::next(i) << "]" << std::endl;
	}
	
}
