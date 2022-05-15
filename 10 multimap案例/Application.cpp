/*
multimap ����
��˾��Ƹ��5��Ա����5��Ա�����빫˾֮����ָ��Ա�����Ǹ����Ź���
��Ա��Ϣ������ ���� �绰 ����
ͨ��multimap������Ϣ�Ĳ��� ���� ��ʾ
�ֲ�����ʾԱ����Ϣ ��ʾȫ��Ա����Ϣ
*/

#include <iostream>
#include <vector>
#include <map>
#include "Worker.h"

#define SALE_DEPARTMENT 1
#define DEVELOP_DEPARTMENT 2
#define FINANCIAL_DEPARTMENT 3
#define ALL_DEPARTMENT 4

//����Ա��
void Create_Worker(std::vector<Worker> &vWorkers);
//Ա������
void WorkerByGroup(std::vector<Worker> &vWorkers, std::multimap<int, Worker> &workerGroups);
//���ÿһ����Ա����Ϣ
void PrintWorkerByGroup(int iDepartId, std::multimap<int, Worker> &workerGroups);

int main()
{
	//�����Ա������Ϣ
	std::vector<Worker> vWorkers;
	//mulitmap���������Ϣ
	std::multimap<int, Worker> workerGroups;
	//����Ա��
	Create_Worker(vWorkers);
	//Ա������
	WorkerByGroup(vWorkers, workerGroups);
	//���ÿһ����Ա����Ϣ
	PrintWorkerByGroup(SALE_DEPARTMENT, workerGroups);
	PrintWorkerByGroup(DEVELOP_DEPARTMENT, workerGroups);
	PrintWorkerByGroup(FINANCIAL_DEPARTMENT, workerGroups);

	return 0;
}

void Create_Worker(std::vector<Worker>& vWorkers)
{
	std::string seedName = "ABCDEFG";
	for (int i = 0;i < seedName.length(); i++)
	{
		Worker worker;
		std::string sName = "Ա��";
		sName += seedName[i];
		worker.setName(sName);
		worker.setAge(rand() % 60 + 20);
		worker.setTele("010-8888888");
		worker.setSalay((double)(rand() % 100 + 5000));
		vWorkers.push_back(worker);
	}
}

void WorkerByGroup(std::vector<Worker>& vWorkers, std::multimap<int, Worker>& workerGroups)
{
	for (int i = 0;i < vWorkers.size(); i++)
	{
		int iDepartId = rand() % 3 + 1;
		workerGroups.insert(std::make_pair(iDepartId, vWorkers.at(i)));
	}
}

void PrintWorkerByGroup(int iDepartId, std::multimap<int, Worker>& workerGroups)
{
	std::multimap<int, Worker>::iterator it = workerGroups.find(iDepartId);
	std::string sDepartName = "";
	switch (iDepartId)
	{
	case SALE_DEPARTMENT:
		sDepartName = "���۲���";
		break;
	case DEVELOP_DEPARTMENT:
		sDepartName = "�з�����";
		break;
	case FINANCIAL_DEPARTMENT:
		sDepartName = "������";
		break;
	default:
		break;
	}

	std::cout << sDepartName << "������: " << workerGroups.count(iDepartId) << std::endl;
	int i = 0;
	for (std::multimap<int, Worker>::iterator pos = it; it != workerGroups.end() && i < workerGroups.count(iDepartId); pos ++, i ++)
	{
		std::cout << "����: " << pos->second.getName() << std::endl;
		std::cout << "����: " << pos->second.getAge() << std::endl;
		std::cout << "�绰: " << pos->second.getTele() << std::endl;
		std::cout << "����: " << pos->second.getSalay() << std::endl;
	}
	std::cout << std::endl;
}
