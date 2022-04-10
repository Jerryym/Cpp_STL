#include <iostream>
#include <string>

int main()
{
	//����string����
	std::string s1;//�����޲ι���
	std::string s2(10, 'a');
	std::string s3("Hello World!");
	std::string s4(s3);//��������

	std::cout << "����string����: " << std::endl;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << s3 << std::endl;
	std::cout << s4 << std::endl;

	//��ֵ����
	std::cout << "\n��ֵ����: " << std::endl;
	s1 = "abcdefg";
	std::cout << s1 << std::endl;
	s1 = s2;
	std::cout << s1 << std::endl;
	s1.assign("123456");//��Ա����
	std::cout << s1 << std::endl;

	//����
	//1-ʹ��[]��ʽ -> ����Խ��ʱ������ֱ�ӱ���
	for (int i = 0; i < (int)s1.size(); i++)
	{
		std::cout << s1[i] << " ";
	}
	std::cout << std::endl;

	//2-ʹ��at()��ʽ -> ����Խ��ʱ�������쳣 out_of_range
	for (int i = 0; i < (int)s1.size(); i++)
	{
		std::cout << s1.at(i) << " ";
	}
	std::cout << std::endl;

	//���쳣
	try
	{
		std::cout << s1.at(80) << std::endl;
	}
	catch (...)//���������쳣
	{
		std::cout << "����Խ�����쳣: ";
		std::cout << "����Խ��!" << std::endl;
	}

	return 0;
}