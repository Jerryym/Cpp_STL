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
	//��ѯ������Ԫ�صĸ���
	std::cout << "v size: " << v.size() << std::endl;
	if (v.empty() != true)//�ж������Ƿ�Ϊ��
	{
		std::cout << "Not Empty!" << std::endl;
	}
	else
	{
		std::cout << "Empty!" << std::endl;
	}
}
