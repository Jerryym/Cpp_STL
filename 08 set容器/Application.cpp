#include <iostream>
#include <set>

//�º���
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
	//����set����
	std::set<int> s1;

	//set ����
	//1-���븳ֵ����
	std::cout << "s1: " << std::endl;
	for (int i = 0;i < 10;i ++) //set��������Ԫ��ʱ���Զ�����, ����ԭ��: ��С����
	{
		s1.insert(rand() % 100);
	}

	//2-��ѯ������С
	std::cout << "s1-Length: " << s1.size() << std::endl;

	//3-����
	for (std::set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	//4-ɾ��
	std::set<int>::iterator it;
	it = s1.erase(s1.begin());//ɾ������������һ��Ԫ�صĵ�����
	std::cout << "s1.iterator it = " << *it << std::endl;

	//5-����ָ��Ԫ��
	int iNum;
	std::cout << "����Ҫ���ҵ�Ԫ��: ";
	std::cin >> iNum;
	it = s1.find(iNum);
	if (it != s1.end())
	{
		std::cout << "����Ԫ��Ϊ: " << *it << std::endl;
	}
	else
	{
		std::cout << "û�ҵ���ӦԪ��!" << std::endl;
	}

	it = s1.lower_bound(iNum);//���ص�һ��key >= iNumԪ�صĵ�����
	if (it != s1.end())
	{
		std::cout << "s1.lower_bound����Ԫ��Ϊ: " << *it << std::endl;
	}
	else
	{
		std::cout << "û�ҵ���ӦԪ��!" << std::endl;
	}

	it = s1.upper_bound(iNum);//���ص�һ��key > iNumԪ�صĵ�����
	if (it != s1.end())
	{
		std::cout << "s1.upper_bound����Ԫ��Ϊ: " << *it << std::endl;
	}
	else
	{
		std::cout << "û�ҵ���ӦԪ��!" << std::endl;
	}

	std::pair<std::set<int>::iterator, std::set<int>::iterator> Results = s1.equal_range(iNum);//����key == iNum�������޵�����������
	std::cout << "it1 = " << *(Results.first) << std::endl;
	std::cout << "it2 = " << *(Results.second) << std::endl;

	//6-����Ĭ������
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