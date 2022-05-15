/*
multimap 案例
公司招聘了5个员工，5名员工进入公司之后，需指派员工在那个部门工作
人员信息：姓名 年龄 电话 工资
通过multimap进行信息的插入 保存 显示
分部门显示员工信息 显示全部员工信息
*/

#include <iostream>
#include <vector>
#include <map>
#include "Worker.h"

#define SALE_DEPARTMENT 1
#define DEVELOP_DEPARTMENT 2
#define FINANCIAL_DEPARTMENT 3
#define ALL_DEPARTMENT 4

//创建员工
void Create_Worker(std::vector<Worker> &vWorkers);
//员工分组
void WorkerByGroup(std::vector<Worker> &vWorkers, std::multimap<int, Worker> &workerGroups);
//输出每一部分员工信息
void PrintWorkerByGroup(int iDepartId, std::multimap<int, Worker> &workerGroups);

int main()
{
	//存放新员工的信息
	std::vector<Worker> vWorkers;
	//mulitmap保存分组信息
	std::multimap<int, Worker> workerGroups;
	//创建员工
	Create_Worker(vWorkers);
	//员工分组
	WorkerByGroup(vWorkers, workerGroups);
	//输出每一部分员工信息
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
		std::string sName = "员工";
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
		sDepartName = "销售部门";
		break;
	case DEVELOP_DEPARTMENT:
		sDepartName = "研发部门";
		break;
	case FINANCIAL_DEPARTMENT:
		sDepartName = "财务部门";
		break;
	default:
		break;
	}

	std::cout << sDepartName << "总人数: " << workerGroups.count(iDepartId) << std::endl;
	int i = 0;
	for (std::multimap<int, Worker>::iterator pos = it; it != workerGroups.end() && i < workerGroups.count(iDepartId); pos ++, i ++)
	{
		std::cout << "姓名: " << pos->second.getName() << std::endl;
		std::cout << "年龄: " << pos->second.getAge() << std::endl;
		std::cout << "电话: " << pos->second.getTele() << std::endl;
		std::cout << "工资: " << pos->second.getSalay() << std::endl;
	}
	std::cout << std::endl;
}
