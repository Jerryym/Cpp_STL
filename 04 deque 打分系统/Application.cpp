//////////////////////////////////////////////////////////////////////////
//��ί��ְ�����sort �㷨����
//����5λѡ�֣����֣�������, 10λ��ί��5λѡ�ֽ�������
//���ֹ���ȥ����߷֣�ȥ����ͷ֣���ƽ����
//��5λѡ�ֵ����յ÷�����
//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Player.h"
#include "Functions.h"

int main()
{
	std::vector<Player> Players;
	std::deque<double> Scores;//�洢��ί����
	//����ѡ��
	CreatePlayer(Players);
	//���
	SetScore(Players, Scores);
	//����ѡ�ַ������� �Ӵ�С
	sort(Players.begin(), Players.end(), Compare);
	//���
	OutPut(Players);

	return 0;
}