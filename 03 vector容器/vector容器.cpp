#include <iostream>
#include <vector>
#include "Function.h"

int main()
{
	//构造
	//默认构造
	std::vector<int> v1;
	int arr[] = { 10,20,30,40 };
	std::vector<int> v2(arr, arr + sizeof(arr) / sizeof(int));
	std::vector<int> v3(v2.begin(), v2.end());
	std::vector<int> v4(v3);//拷贝构造

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

	//查询容器中元素个数
	GetVectorSize(v5);

	//重设容器长度
	//1-重设长度小于原长度
	v5.resize(5);
	PrintVector(v5);
	//2-重设长度大于原长度
	v5.resize(20);//大于原长度的元素默认设置为0
	PrintVector(v5);
	v2.resize(10, 2);//大于原长度的元素设置为指定元素值
	PrintVector(v2);

	//查询元素容量(capacity >= size)
	std::vector<int> v6;
	for (int i = 0; i < 10000; i++)
	{
		v6.push_back(i * 2);
	}
	std::cout << "v size: " << v6.size() << std::endl;
	std::cout << "capacity: " << v6.capacity() << std::endl;

	std::cout << "v6 front: " << v6.front() << std::endl;
	std::cout << "v6 back: " << v6.back() << std::endl;

	//插入和删除操作
	v5.insert(v5.begin(), 50);//头插法
	v5.insert(v5.end(), 100);//尾插法
	v5.insert(v5.begin() + 3, 500);//由于vector的迭代器支持随机访问，因此可以使用v.begin()+i来指定位置添加元素
	PrintVector(v5);
	v5.clear();//删除整个容器中的所有元素
	GetVectorSize(v5);
	v6.erase(v6.begin());
	PrintVector(v6);
	v6.erase(v6.begin() + 10, v6.end());
	PrintVector(v6);
	
	//使用swap缩减容器空间
	std::cout << "v6 size: " << v6.size() << std::endl;
	std::cout << "capacity: " << v6.capacity() << std::endl;
	v6.resize(10);
	std::cout << "---------------" << std::endl;
	std::cout << "v6 size: " << v6.size() << std::endl;
	std::cout << "capacity: " << v6.capacity() << std::endl;
	std::vector<int>(v6).swap(v6);//匿名函数
	std::cout << "---------------" << std::endl;
	std::cout << "v6 size: " << v6.size() << std::endl;
	std::cout << "capacity: " << v6.capacity() << std::endl;

	//reserve预留空间提高程序效率
	//不使用reserve预留空间时，Num = 24
	//使用reserve预留空间时，Num = 1
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