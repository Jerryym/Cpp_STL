#include "Functions.h"

void CreatePlayer(std::vector<Player>& Players)
{
	std::string nameSeed = "ABCDE";

	for (int i = 0;i < (int)nameSeed.length();i ++)
	{
		std::string Name = "Player-";
		Name += nameSeed[i];
		Player player(Name, 0);
		Players.push_back(player);
	}
}

void SetScore(std::vector<Player>& Players, std::deque<double>& Scores)
{
	for (std::vector<Player>::iterator it = Players.begin(); it != Players.end(); it++)
	{
		for (int i = 0; i < 10; i++)
		{
			double rScore = rand() % 41 + 60;
			Scores.push_back(rScore);
		}

		//�������ִӵ͵�������
		sort(Scores.begin(), Scores.end());

		//ȥ����߷֣�ȥ����ͷ֣���ƽ����
		Scores.pop_front();
		Scores.pop_back();
		double rSum = 0.0;
		for (std::deque<double>::iterator dequeIt = Scores.begin(); dequeIt != Scores.end(); dequeIt++)
		{
			rSum += (*dequeIt);
		}
		(*it).setScore(rSum / Scores.size());
	}
}

bool Compare(Player & P1, Player & P2)
{
	return P1.getScore() > P2.getScore();
}

void OutPut(std::vector<Player>& Players)
{
	for (int i = 0;i < (int)Players.size(); i++)
	{
		std::cout << "Name: "<< Players[i].getName() << " Score: " << Players[i].getScore() << std::endl;
	}
}
