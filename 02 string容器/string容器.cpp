#include <iostream>
#include <string>

int main()
{
	//构造string对象
	std::string s1;//调用无参构造
	std::string s2(10, 'a');
	std::string s3("Hello World!");
	std::string s4(s3);//拷贝构造

	std::cout << "构造string对象: " << std::endl;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << s3 << std::endl;
	std::cout << s4 << std::endl;

	//赋值操作
	std::cout << "\n赋值操作: " << std::endl;
	s1 = "abcdefg";
	std::cout << s1 << std::endl;
	s1 = s2;
	std::cout << s1 << std::endl;
	s1.assign("123456");//成员方法
	std::cout << s1 << std::endl;

	//遍历
	//1-使用[]方式 -> 访问越界时，程序直接崩溃
	for (int i = 0; i < (int)s1.size(); i++)
	{
		std::cout << s1[i] << " ";
	}
	std::cout << std::endl;

	//2-使用at()方式 -> 访问越界时，会抛异常 out_of_range
	for (int i = 0; i < (int)s1.size(); i++)
	{
		std::cout << s1.at(i) << " ";
	}
	std::cout << std::endl;

	//抛异常
	try
	{
		std::cout << s1.at(80) << std::endl;
	}
	catch (...)//捕获所有异常
	{
		std::cout << "访问越界抛异常: ";
		std::cout << "访问越界!" << std::endl;
	}

	return 0;
}