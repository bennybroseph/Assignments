#include "Score.h"

Score_Class::Score_Class(int p_1, int p_2, int p_3)
{
	this->high_scores[0] = p_1;
	this->high_scores[1] = p_2;
	this->high_scores[2] = p_3;
}

int Score_Class::GetAverage()
{
	return (this->high_scores[0]+ this->high_scores[1]+ this->high_scores[2])/3;
}

void Score_Class::SetScore(int p_Score, int i)
{
	this->high_scores[i] = p_Score;
}
void Score_Class::SetScore(int p_1, int p_2, int p_3)
{
	this->high_scores[0] = p_1;
	this->high_scores[1] = p_2;
	this->high_scores[2] = p_3;
}

int Score_Class::GetScore(int i)
{
	return this->high_scores[i];
}
int * Score_Class::GetScore()
{
	return this->high_scores;
}

Score_Class::~Score_Class()
{
}
