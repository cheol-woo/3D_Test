#include <iostream>
#include<iterator>
#include<vector>

int main()
{
	std::vector<int> v{ 3,1,4 };

	auto vi = v.begin();
	//std::advance(vi, 1);
	std::cout << *vi << ' ';

	//vi = v.end();
	//std::advance(vi, -2);
	//std::cout << *vi << '\n';
	return 0;
}
