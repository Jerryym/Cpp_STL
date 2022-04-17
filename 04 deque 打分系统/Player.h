#pragma once
#include <iostream>
#include <string>
#include <deque>

class Player
{
public:
	Player();
	Player(const std::string &name, double rScore);
	~Player();

	std::string getName() const;
	void setScore(double rScore);
	double getScore() const;

private:
	std::string m_Name;
	double m_rScore;
};

