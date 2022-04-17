#include "Player.h"

Player::Player()
{
	this->m_Name = "";
	this->m_rScore = 0.0;
}

Player::Player(const std::string &name, double rScore) : 
	m_Name(name), 
	m_rScore(rScore)
{

}

Player::~Player()
{

}

std::string Player::getName() const
{
	return m_Name;
}

void Player::setScore(double rScore)
{
	this->m_rScore = rScore;
}

double Player::getScore() const
{
	return m_rScore;
}