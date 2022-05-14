#include <iostream>
#include <list>

int main()
{
	//创建链表
	std::list<int> list1;
	std::list<int> list2;
	std::list<int> list3;
	
	//列表操作
	//1-插入
	for (int i = 0;i < 10;i ++)//头插法
	{
		list1.push_front(i + 1);
	}
	for (int i = 0;i < 10; i++)//尾插法
	{
		list2.push_back(i + 1);
	}
	for (int i = 0;i < 10;i ++)
	{
		list3.push_back(rand () % 100);
	}

	//2-访问长度
	std::cout << "list1-Length: " << list1.size() << std::endl;
	std::cout << "list2-Length: " << list2.size() << std::endl;

	//3-遍历
	std::cout << "list1:" << std::endl;
	for (std::list<int>::iterator it = list1.begin(); it != list1.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "list2:" << std::endl;
	for (std::list<int>::iterator it = list2.begin(); it != list2.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "list3:" << std::endl;
	for (std::list<int>::iterator it = list3.begin(); it != list3.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	//4-移除链表开头的第一个元素、链表最后一个元素
	list1.pop_front();
	list1.pop_back();
	list2.pop_front();
	list2.pop_back();

	//5-访问第一个、最后一个元素
	std::cout << "list1-front: " << list1.front() << std::endl;
	std::cout << "list1-back: " << list1.back() << std::endl;
	std::cout << "list2-front: " << list2.front() << std::endl;
	std::cout << "list2-back: " << list2.back() << std::endl;

	//6-反转链表
	list1.reverse();
	list2.reverse();

	//7-排序
	list3.sort();

	std::cout << "list1:" << std::endl;
	for (std::list<int>::iterator it = list1.begin(); it != list1.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "list2:" << std::endl;
	for (std::list<int>::iterator it = list2.begin(); it != list2.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "list3:" << std::endl;
	for (std::list<int>::iterator it = list3.begin(); it != list3.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	return 0;
}