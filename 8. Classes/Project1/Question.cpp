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

	scores[0] = 0;
	scores[1] = 0;
}

void Question_Class::Handle()
{
	std::string input;
	char buffer[256];

	int i, j;
	for (i = 0; i < this->Questions.size(); i++)
	{
		Graphics::New("5");
		std::cout << "Player " << (i % 2) + 1 << ", this question is for you:" << std::endl << std::endl;
		std::cout << this->Questions[i].question << std::endl << std::endl;
		for (j = 0; j < 4; j++)
		{
			std::cout << this->Questions[i].answers[j] << std::endl;			
		}
		std::cout << std::endl << "Answer: ";
		getline(std::cin, input);
		std::cout << std::endl;

		if (int(input[0]) - 96 == this->Questions[i].answer)
		{
			scores[i % 2]++;
			std::cout << "That is correct!" << std::endl << "Player " << (i % 2) + 1 << " has " << scores[i % 2] << " points now.";			
		}
		else
			std::cout << "Unfortunatly the correct answer was " << this->Questions[i].answers[this->Questions[i].answer-1];
		Graphics::End();
	}
	Graphics::New("5");
	if (scores[0] > scores[1])
		std::cout << "Player 1 has won with " << scores[0];
	else if (scores[1] > scores[0])
		std::cout << "Player 2 has won with " << scores[1];
	else
		std::cout << "Both Players have the same score...You both win?!...";
}


Question_Class::~Question_Class()
{
}
