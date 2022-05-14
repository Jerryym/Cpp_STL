//////////////////////////////////////////////////////////////////////////
/*
栈(stack)容器：
1、不支持迭代器， 即不可以遍历
2、不支持随机存取
3、支持存储基本数据类型、对象指针、对象
*/
//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stack>

int main()
{
	//创建栈
	std::stack<int> s1; //默认构造
	std::stack<int> s2(s1); //复制构造

	//stack 操作
	//1-入栈push
	for (int i = 0;i < 10;i ++)
	{
		s1.push(i + 1);
	}

	//2-访问长度
	std::cout << "sl-Length: " << s1.size() << std::endl;

	//3-出栈
	while (!s1.empty())
	{
		std::cout << "栈顶元素: " << s1.top() << std::endl;//访问栈顶元素
		s1.pop(); //出栈
	}

	return 0;
}