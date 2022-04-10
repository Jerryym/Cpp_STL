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
	//����
	std::cout << "\n��һ�ֱ�����ʽ���±����" << std::endl;
	for (int i = 0; i < (int)v.size(); i++)//Persons.size()Ϊunsigned int ����
	{
		std::cout << v[i].getId() << ", " << v[i].getAge() << std::endl;
	}

	std::cout << "�ڶ��ֱ�����ʽ������������" << std::endl;
	for (std::vector<Person>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		std::cout << (*iter).getId() << ", " << (*iter).getAge() << std::endl;
	}

	std::cout << "C++11,�����ֱ�����ʽ��auto�ؼ���" << std::endl;
	for (auto iter = v.begin(); iter != v.end(); iter++)
	{
		std::cout << (*iter).getId() << ", " << (*iter).getAge() << std::endl;
	}

	std::cout << "C++11,�����ֱ�����ʽ��auto�ؼ���" << std::endl;
	for (auto iter : v)
	{
		std::cout << iter.getId() << ", " << iter.getAge() << std::endl;
	}
}

void Traversal(std::vector<Person *> v)
{
	//����
	std::cout << "\n��һ�ֱ�����ʽ���±����" << std::endl;
	for (int i = 0; i < (int)v.size(); i++)//Persons.size()Ϊunsigned int ����
	{
		std::cout << v[i]->getId() << ", " << v[i]->getAge() << std::endl;
	}

	std::cout << "�ڶ��ֱ�����ʽ������������" << std::endl;
	for (std::vector<Person *>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		std::cout << (*iter)->getId() << ", " << (*iter)->getAge() << std::endl;
	}

	std::cout << "C++11,�����ֱ�����ʽ��auto�ؼ���" << std::endl;
	for (auto iter = v.begin(); iter != v.end(); iter++)
	{
		std::cout << (*iter)->getId() << ", " << (*iter)->getAge() << std::endl;
	}

	std::cout << "C++11,�����ֱ�����ʽ��auto�ؼ���" << std::endl;
	for (auto iter : v)
	{
		std::cout << iter->getId() << ", " << iter->getAge() << std::endl;
	}
}

void setVectorOfInt(std::vector<int>& v)
{
	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
}

void setVectorOfPerson(std::vector<Person>& Persons)
{
	//�������в�������
	Person p1(10, 20);
	Person p2(30, 40);
	Person p3(50, 60);
	Persons.push_back(p1);
	Persons.push_back(p2);
	Persons.push_back(p3);
}

void setVectorOfPersonPoint(std::vector<Person *>& pPersons)
{
	//�������в�������
	Person *p1 = new Person(10, 20);
	Person *p2 = new Person(30, 40);
	Person *p3 = new Person(50, 60);
	pPersons.push_back(p1);
	pPersons.push_back(p2);
	pPersons.push_back(p3);
}

int main()
{
	//����һ��������ָ�����������ŵ�Ԫ������Ϊ������������
	std::vector<int> v;
	setVectorOfInt(v);
	//ͨ��STL��algorithm���е��㷨���б���
	//�����ṩ������
	//std::vector<int>::iterator: ����������
	std::vector<int>::iterator pBegin = v.begin();
	std::vector<int>::iterator pEnd = v.end();
	for_each(pBegin, pEnd, Output);

	//����һ��������ָ����������ŵ�Ԫ������Ϊ�Զ���Ԫ������
	std::vector<Person> Persons;
	setVectorOfPerson(Persons);
	Traversal(Persons);
	
	//����һ��������ָ����������ŵ�Ԫ������Ϊ�Զ���Ԫ�����͵�ָ��
	std::vector<Person *> pPersons;
	setVectorOfPersonPoint(pPersons);
	Traversal(pPersons);
	//ɾ������ָ��
	for (int i = 0; i < (int)pPersons.size(); i++)
	{
		delete pPersons[i];
		pPersons[i] = NULL;
	}

	return 0;
}