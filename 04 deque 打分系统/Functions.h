#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include "Player.h"

//����ѡ��
void CreatePlayer(std::vector<Player> &Players);
//���
void SetScore(std::vector<Player> &Players, std::deque<double> &Scores);
//�����׼ �Ӵ�С
bool Compare(Player &P1, Player &P2);
//����������
void OutPut(std::vector<Player> &Players);