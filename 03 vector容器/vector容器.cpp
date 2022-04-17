#include <iostream>
#include <vector>
#include "Function.h"

int main()
{
	//����
	//Ĭ�Ϲ���
	std::vector<int> v1;
	int arr[] = { 10,20,30,40 };
	std::vector<int> v2(arr, arr + sizeof(arr) / sizeof(int));
	std::vector<int> v3(v2.begin(), v2.end());
	std::vector<int> v4(v3);//��������

	PrintVector(v1);
	PrintVector(v2);
	PrintVector(v3);
	PrintVector(v4);

	std::vector<int> v5;
	for (int i = 0;i < 10;i ++)
	{
		v5.push_back(i * 2);
	}
	PrintVector(v5);

	//��ѯ������Ԫ�ظ���
	GetVectorSize(v5);

	//������������
	//1-���賤��С��ԭ����
	v5.resize(5);
	PrintVector(v5);
	//2-���賤�ȴ���ԭ����
	v5.resize(20);//����ԭ���ȵ�Ԫ��Ĭ������Ϊ0
	PrintVector(v5);
	v2.resize(10, 2);//����ԭ���ȵ�Ԫ������Ϊָ��Ԫ��ֵ
	PrintVector(v2);

	//��ѯԪ������(capacity >= size)
	std::vector<int> v6;
	for (int i = 0; i < 10000; i++)
	{
		v6.push_back(i * 2);
	}
	std::cout << "v size: " << v6.size() << std::endl;
	std::cout << "capacity: " << v6.capacity() << std::endl;

	std::cout << "v6 front: " << v6.front() << std::endl;
	std::cout << "v6 back: " << v6.back() << std::endl;

	//�����ɾ������
	v5.insert(v5.begin(), 50);//ͷ�巨
	v5.insert(v5.end(), 100);//β�巨
	v5.insert(v5.begin() + 3, 500);//����vector�ĵ�����֧��������ʣ���˿���ʹ��v.begin()+i��ָ��λ�����Ԫ��
	PrintVector(v5);
	v5.clear();//ɾ�����������е�����Ԫ��
	GetVectorSize(v5);
	v6.erase(v6.begin());
	PrintVector(v6);
	v6.erase(v6.begin() + 10, v6.end());
	PrintVector(v6);
	
	//ʹ��swap���������ռ�
	std::cout << "v6 size: " << v6.size() << std::endl;
	std::cout << "capacity: " << v6.capacity() << std::endl;
	v6.resize(10);
	std::cout << "---------------" << std::endl;
	std::cout << "v6 size: " << v6.size() << std::endl;
	std::cout << "capacity: " << v6.capacity() << std::endl;
	std::vector<int>(v6).swap(v6);//��������
	std::cout << "---------------" << std::endl;
	std::cout << "v6 size: " << v6.size() << std::endl;
	std::cout << "capacity: " << v6.capacity() << std::endl;

	//reserveԤ���ռ���߳���Ч��
	//��ʹ��reserveԤ���ռ�ʱ��Num = 24
	//ʹ��reserveԤ���ռ�ʱ��Num = 1
	int iNum = 0;
	int *address = nullptr;
	std::vector<int> v7;
	v7.reserve(10000);
	for (int i = 0; i < 10000; i++)
	{
		v7.push_back(i * 2);
		if (address != &(v7.at(0)))
		{
			address = &(v7.at(0));
			iNum++;
		}
	}
	std::cout << "Num = " << iNum << std::endl;

	return 0;
}