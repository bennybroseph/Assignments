#ifndef QUESTION_H
#define QUESTION_H

#include "Graphics.h"

#include <iostream>
#include <string>
#include <vector>

class Question_Class
{
public:
	Question_Class();

	void Handle();

	~Question_Class();
private:
	struct Question_Struct
	{
		std::string question;
		std::string answers[4];
		int answer;
	};

	std::vector<Question_Struct> Questions;
	int scores[2];
};

#endif //QUESTION_H

