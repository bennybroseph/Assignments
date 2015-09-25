#ifndef SCORE_H
#define SCORE_H

class Score_Class
{
public:
	Score_Class(int = 5, int = 6, int = 10);

	int GetAverage();

	void SetScore(int, int);
	void SetScore(int, int, int);

	int GetScore(int);
	int* GetScore();

	~Score_Class();

private:
	int high_scores[3];

};

#endif //SCORE_H

