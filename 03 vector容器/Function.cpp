#include "Function.h"

void PrintVector(std::vector<int> &v)
{
	std::cout << "v = ";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void GetVectorSize(std::vector<int> &v)
{
	//查询容器中元素的个数
	std::cout << "v size: " << v.size() << std::endl;
	if (v.empty() != true)//判断容器是否为空
	{
		std::cout << "Not Empty!" << std::endl;
	}
	else
	{
		std::cout << "Empty!" << std::endl;
	}
}
