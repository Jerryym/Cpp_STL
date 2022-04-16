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

	return 0;
}