#include <iostream>
#include <vector>
#include <algorithm>

void Output(int v)
{
	std::cout << v << std::endl;
}


int main()
{
	//����һ����������ָ�����������ŵ�Ԫ������
	std::vector<int> v;
	
	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ͨ��STL��algorithm���е��㷨���б���
	//�����ṩ������
	std::vector<int>::iterator pBegin = v.begin();
	std::vector<int>::iterator pEnd = v.end();
	for_each(pBegin, pEnd, Output);

	return 0;
}