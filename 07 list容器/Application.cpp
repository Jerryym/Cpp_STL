#include <iostream>
#include <list>

int main()
{
	//��������
	std::list<int> list1;
	std::list<int> list2;
	std::list<int> list3;
	
	//�б����
	//1-����
	for (int i = 0;i < 10;i ++)//ͷ�巨
	{
		list1.push_front(i + 1);
	}
	for (int i = 0;i < 10; i++)//β�巨
	{
		list2.push_back(i + 1);
	}
	for (int i = 0;i < 10;i ++)
	{
		list3.push_back(rand () % 100);
	}

	//2-���ʳ���
	std::cout << "list1-Length: " << list1.size() << std::endl;
	std::cout << "list2-Length: " << list2.size() << std::endl;

	//3-����
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

	//4-�Ƴ�����ͷ�ĵ�һ��Ԫ�ء��������һ��Ԫ��
	list1.pop_front();
	list1.pop_back();
	list2.pop_front();
	list2.pop_back();

	//5-���ʵ�һ�������һ��Ԫ��
	std::cout << "list1-front: " << list1.front() << std::endl;
	std::cout << "list1-back: " << list1.back() << std::endl;
	std::cout << "list2-front: " << list2.front() << std::endl;
	std::cout << "list2-back: " << list2.back() << std::endl;

	//6-��ת����
	list1.reverse();
	list2.reverse();

	//7-����
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