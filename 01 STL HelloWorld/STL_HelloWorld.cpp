#include <iostream>
#include <vector>
#include <algorithm>

void Output(int v)
{
	std::cout << v << std::endl;
}


int main()
{
	//定义一个容器，并指定这个容器存放的元素类型
	std::vector<int> v;
	
	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//通过STL的algorithm库中的算法进行遍历
	//容器提供迭代器
	std::vector<int>::iterator pBegin = v.begin();
	std::vector<int>::iterator pEnd = v.end();
	for_each(pBegin, pEnd, Output);

	return 0;
}