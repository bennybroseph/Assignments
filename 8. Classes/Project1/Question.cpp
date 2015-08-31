#include "Question.h"

Question_Class::Question_Class()
{
	this->Questions.push_back({ "Mary's Father has 4 children: John, James, Jacob, and who?",
							   { "a. Josh", "b. Jamal", "c. Bob", "d. Mary" }, 4 });

	this->Questions.push_back({ "What is the name of the main protaganist from 'The Witcher 3'",
							   { "a. Gerald", "b. Geralt", "c. Garfield", "d. Bojangles" }, 2 });

	this->Questions.push_back({ "If 10 + 10 = 100, what number system is being used?",
							   { "a. Decimal", "b. Hexidecimal", "c. Binary", "d. Octagons" }, 3 });

	this->Questions.push_back({ "In 'League of Legends', there are 5 meta roles for each player:\nJungle, Top, Mid, ADC, and what?",
							   { "a. Support", "b. Tank", "c. Mage", "d. Dyrus" }, 1 });
}

void Question_Class::Handle()
{
	std::string input;
	char buffer[256];

	int i, j;
	for (i = 0; i < this->Questions.size(); i++)
	{
		Graphics::New("5");
		std::cout << this->Questions[i].question << std::endl << std::endl;
		for (j = 0; j < 4; j++)
		{
			std::cout << this->Questions[i].answers[j] << std::endl;			
		}
		std::cout << std::endl << "Answer: ";
		getline(std::cin, input);
		strcpy_s(buffer, input.c_str());
		
		if (atoi(buffer) == this->Questions[i].answer)
		{

		}
		Graphics::End();
	}
}


Question_Class::~Question_Class()
{
}
