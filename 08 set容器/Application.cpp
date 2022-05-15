#include <iostream>
#include <set>

//仿函数
class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

int main()
{
	//创建set容器
	std::set<int> s1;

	//set 操作
	//1-插入赋值操作
	std::cout << "s1: " << std::endl;
	for (int i = 0;i < 10;i ++) //set容器插入元素时会自动排序, 排序原则: 从小到大
	{
		s1.insert(rand() % 100);
	}

	//2-查询容器大小
	std::cout << "s1-Length: " << s1.size() << std::endl;

	//3-遍历
	for (std::set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	//4-删除
	std::set<int>::iterator it;
	it = s1.erase(s1.begin());//删除操作返回下一个元素的迭代器
	std::cout << "s1.iterator it = " << *it << std::endl;

	//5-查找指定元素
	int iNum;
	std::cout << "输入要查找的元素: ";
	std::cin >> iNum;
	it = s1.find(iNum);
	if (it != s1.end())
	{
		std::cout << "查找元素为: " << *it << std::endl;
	}
	else
	{
		std::cout << "没找到对应元素!" << std::endl;
	}

	it = s1.lower_bound(iNum);//返回第一个key >= iNum元素的迭代器
	if (it != s1.end())
	{
		std::cout << "s1.lower_bound查找元素为: " << *it << std::endl;
	}
	else
	{
		std::cout << "没找到对应元素!" << std::endl;
	}

	it = s1.upper_bound(iNum);//返回第一个key > iNum元素的迭代器
	if (it != s1.end())
	{
		std::cout << "s1.upper_bound查找元素为: " << *it << std::endl;
	}
	else
	{
		std::cout << "没找到对应元素!" << std::endl;
	}

	std::pair<std::set<int>::iterator, std::set<int>::iterator> Results = s1.equal_range(iNum);//返回key == iNum的上下限的两个迭代器
	std::cout << "it1 = " << *(Results.first) << std::endl;
	std::cout << "it2 = " << *(Results.second) << std::endl;

	//6-更改默认排序
	std::set<int, MyCompare> s2;
	for (int i = 0; i < 10; i++)
	{
		s2.insert(rand() % 50);
	}
	std::cout << "s2: " << std::endl;
	for (std::set<int>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	return 0;
}