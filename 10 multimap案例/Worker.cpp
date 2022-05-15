#include "Worker.h"

Worker::Worker()
{
	this->m_sName = "";
	this->m_iAge = 0;
	this->m_sTele = "";
	this->m_rSalay = 0.0;
}

Worker::Worker(const std::string &sName, int iAge, const std::string &sTele, double rSalay)
{
	this->m_sName = sName;
	this->m_iAge = iAge;
	this->m_sTele = sTele;
	this->m_rSalay = rSalay;
}

Worker::~Worker()
{

}

void Worker::setName(const std::string &sName)
{
	this->m_sName = sName;
}

void Worker::setAge(int iAge)
{
	this->m_iAge = iAge;
}

void Worker::setTele(const std::string & sTele)
{
	this->m_sTele = sTele;
}

void Worker::setSalay(double rSalay)
{
	this->m_rSalay = rSalay;
}
