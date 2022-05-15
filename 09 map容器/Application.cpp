#include <iostream>
#include <map>

void Print(std::map<int, int> &mymap);

int main()
{
	//创建map容器 
	//map<key, value> 
	//第一个参数为key值的类型，第二个参数为value的类型
	std::map<int, int> map1;
	std::map<int, int> map2;
	std::map<int, int> map3;
	std::map<int, int> map4;

	//map操作
	//1-插入和赋值操作
	//1.1 通过pair的方式插入元素对象
	for (int i = 0;i < 20; i++)
	{
		map1.insert(std::pair<int, int>(i + 1, rand() % 200 + 1));
	}
	//1.2 通过pair的方式插入元素对象
	for (int i = 0; i < 20; i++)
	{
		map2.insert(std::make_pair(i + 1, rand() % 150 + 1));
	}
	//1.3 通过value_type的方式插入元素对象
	for (int i = 0; i < 20; i++)
	{
		map3.insert(std::map<int, int>::value_type(i + 1, rand() % 100 + 1));
	}
	//1.4 通过数组的方式插入元素对象
	for (int i = 0; i < 20; i++)
	{
		map4[i + 1] = rand() % 50 + 1;
	}

	//2-遍历
	std::cout << "map1:" << std::endl;
	Print(map1);
	std::cout << "map2:" << std::endl;
	Print(map2);
	std::cout << "map3:" << std::endl;
	Print(map3);
	std::cout << "map4:" << std::endl;
	Print(map4);

	return 0;
}

void Print(std::map<int, int> &mymap)
{
	for (std::map<int, int>::iterator it = mymap.begin(); it != mymap.end(); it++)
	{
		std::cout << "key: " << (*it).first << " value: " << (*it).second << std::endl;
	}
}