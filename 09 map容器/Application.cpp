#include <iostream>
#include <map>

void Print(std::map<int, int> &mymap);

int main()
{
	//����map���� 
	//map<key, value> 
	//��һ������Ϊkeyֵ�����ͣ��ڶ�������Ϊvalue������
	std::map<int, int> map1;
	std::map<int, int> map2;
	std::map<int, int> map3;
	std::map<int, int> map4;

	//map����
	//1-����͸�ֵ����
	//1.1 ͨ��pair�ķ�ʽ����Ԫ�ض���
	for (int i = 0;i < 20; i++)
	{
		map1.insert(std::pair<int, int>(i + 1, rand() % 200 + 1));
	}
	//1.2 ͨ��pair�ķ�ʽ����Ԫ�ض���
	for (int i = 0; i < 20; i++)
	{
		map2.insert(std::make_pair(i + 1, rand() % 150 + 1));
	}
	//1.3 ͨ��value_type�ķ�ʽ����Ԫ�ض���
	for (int i = 0; i < 20; i++)
	{
		map3.insert(std::map<int, int>::value_type(i + 1, rand() % 100 + 1));
	}
	//1.4 ͨ������ķ�ʽ����Ԫ�ض���
	for (int i = 0; i < 20; i++)
	{
		map4[i + 1] = rand() % 50 + 1;
	}

	//2-����
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