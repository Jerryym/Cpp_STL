#include <iostream>
#include <vector>
#include <algorithm>
#include "Person.h"

void Output(int v)
{
	std::cout << v << std::endl;
}

void Traversal(std::vector<Person> v)
{
	//遍历
	std::cout << "\n第一种遍历方式，下标访问" << std::endl;
	for (int i = 0; i < (int)v.size(); i++)//Persons.size()为unsigned int 类型
	{
		std::cout << v[i].getId() << ", " << v[i].getAge() << std::endl;
	}

	std::cout << "第二种遍历方式，迭代器访问" << std::endl;
	for (std::vector<Person>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		std::cout << (*iter).getId() << ", " << (*iter).getAge() << std::endl;
	}

	std::cout << "C++11,第三种遍历方式，auto关键字" << std::endl;
	for (auto iter = v.begin(); iter != v.end(); iter++)
	{
		std::cout << (*iter).getId() << ", " << (*iter).getAge() << std::endl;
	}

	std::cout << "C++11,第四种遍历方式，auto关键字" << std::endl;
	for (auto iter : v)
	{
		std::cout << iter.getId() << ", " << iter.getAge() << std::endl;
	}
}

void Traversal(std::vector<Person *> v)
{
	//遍历
	std::cout << "\n第一种遍历方式，下标访问" << std::endl;
	for (int i = 0; i < (int)v.size(); i++)//Persons.size()为unsigned int 类型
	{
		std::cout << v[i]->getId() << ", " << v[i]->getAge() << std::endl;
	}

	std::cout << "第二种遍历方式，迭代器访问" << std::endl;
	for (std::vector<Person *>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		std::cout << (*iter)->getId() << ", " << (*iter)->getAge() << std::endl;
	}

	std::cout << "C++11,第三种遍历方式，auto关键字" << std::endl;
	for (auto iter = v.begin(); iter != v.end(); iter++)
	{
		std::cout << (*iter)->getId() << ", " << (*iter)->getAge() << std::endl;
	}

	std::cout << "C++11,第四种遍历方式，auto关键字" << std::endl;
	for (auto iter : v)
	{
		std::cout << iter->getId() << ", " << iter->getAge() << std::endl;
	}
}

void setVectorOfInt(std::vector<int>& v)
{
	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
}

void setVectorOfPerson(std::vector<Person>& Persons)
{
	//向容器中插入数据
	Person p1(10, 20);
	Person p2(30, 40);
	Person p3(50, 60);
	Persons.push_back(p1);
	Persons.push_back(p2);
	Persons.push_back(p3);
}

void setVectorOfPersonPoint(std::vector<Person *>& pPersons)
{
	//向容器中插入数据
	Person *p1 = new Person(10, 20);
	Person *p2 = new Person(30, 40);
	Person *p3 = new Person(50, 60);
	pPersons.push_back(p1);
	pPersons.push_back(p2);
	pPersons.push_back(p3);
}

int main()
{
	//定义一个容器，指定这个容器存放的元素类型为基本数据类型
	std::vector<int> v;
	setVectorOfInt(v);
	//通过STL的algorithm库中的算法进行遍历
	//容器提供迭代器
	//std::vector<int>::iterator: 迭代器类型
	std::vector<int>::iterator pBegin = v.begin();
	std::vector<int>::iterator pEnd = v.end();
	for_each(pBegin, pEnd, Output);

	//定义一个容器，指定其容器存放的元素类型为自定义元素类型
	std::vector<Person> Persons;
	setVectorOfPerson(Persons);
	Traversal(Persons);
	
	//定义一个容器，指定其容器存放的元素类型为自定义元素类型的指针
	std::vector<Person *> pPersons;
	setVectorOfPersonPoint(pPersons);
	Traversal(pPersons);
	//删除对象指针
	for (int i = 0; i < (int)pPersons.size(); i++)
	{
		delete pPersons[i];
		pPersons[i] = NULL;
	}

	return 0;
}