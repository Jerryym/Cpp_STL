#pragma once
#include <iostream>
#include <string>

class Worker
{
public:
	Worker();
	Worker(const std::string &sName, int iAge, const std::string &sTele, double rSalay);
	~Worker();

	void setName(const std::string &sName);
	std::string getName() const { return this->m_sName; }
	void setAge(int iAge);
	int getAge() const { return this->m_iAge; }
	void setTele(const std::string &sTele);
	std::string getTele() const { return this->m_sTele; }
	void setSalay(double rSalay);
	double getSalay() const { return this->m_rSalay; }

protected:

private:
	std::string m_sName;
	int m_iAge;
	std::string m_sTele;
	double m_rSalay;
};