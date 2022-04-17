//////////////////////////////////////////////////////////////////////////
//评委打分案例（sort 算法排序）
//创建5位选手（名字，分数）, 10位评委对5位选手进行评分
//评分规则：去掉最高分，去掉最低分，求平均分
//按5位选手的最终得分排名
//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Player.h"
#include "Functions.h"

int main()
{
	std::vector<Player> Players;
	std::deque<double> Scores;//存储评委分数
	//创建选手
	CreatePlayer(Players);
	//打分
	SetScore(Players, Scores);
	//根据选手分数排序 从大到小
	sort(Players.begin(), Players.end(), Compare);
	//输出
	OutPut(Players);

	return 0;
}