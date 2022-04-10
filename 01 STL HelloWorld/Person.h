#pragma once
class Person
{
public:
	Person();
	Person(int Id, int Age);
	int getId() const { return m_Id; }
	int getAge() const { return m_Age; }
	~Person();

private:
	int m_Id;
	int m_Age;
};