#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include "Player.h"

//创建选手
void CreatePlayer(std::vector<Player> &Players);
//打分
void SetScore(std::vector<Player> &Players, std::deque<double> &Scores);
//排序标准 从大到小
bool Compare(Player &P1, Player &P2);
//输出排名结果
void OutPut(std::vector<Player> &Players);