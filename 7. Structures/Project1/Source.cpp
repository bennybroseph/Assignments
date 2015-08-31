#include <iostream>
#include <iomanip>
#include <string>

void Exercise1();
struct Player_Struct
{
	std::string Name;
	int Health, Score;

	int Position, Velocity;
};
struct Point_Struct
{
	float x, y;
};
struct Color_Struct
{
	int r, g, b, a;
};
struct Rectangle_Struct
{
	Point_Struct tl, tr, bl, br;
	Color_Struct Color;
};

void Exercise2();
void Ask(Player_Struct&);
void Tell(Player_Struct);

void Exercise4();
void Exercise5(Player_Struct*);

void Exercise6();
struct Item_Struct
{
	std::string Name;
	int Cost, Quantity;
};
struct Shop_Struct
{
	int Gold = 50000;
	Item_Struct Stock[5] = { {"Hylian Shield", 1000, 1}, { "Master Sword", -1, 1 }, {"Deku Nut", 50, 10}, { "Kokori Sword", 200, 3 }, {"Tri-Force", -1, 0} };
};
bool Pricing(Shop_Struct&);
bool Buy(Shop_Struct&);
bool Sell(Shop_Struct&);

void New(char*);
void End();

int main()
{
	New("1a");
	Exercise1();
	End();

	New("2");
	Exercise2();
	End();

	New("3");
	Exercise2();
	End();

	New("4");
	Exercise4();
	End();

	Exercise6();
	End();

	return 0;
}

void Exercise1()
{
	Player_Struct Player = {};

	End();
	New("1b");
	Rectangle_Struct Rectangle = {};
}

void Exercise2()
{
	Player_Struct Player = {};	

	Ask(Player);
	Tell(Player);
}
void Ask(Player_Struct& p_Player)
{
	std::string input;
	char buffer[256];

	std::cout << "Please enter your name: ";
	getline(std::cin, input);

	p_Player.Name = input;

	std::cout << "Now enter your score: ";
	getline(std::cin, input);

	strcpy_s(buffer, input.c_str());
	p_Player.Score = atoi(buffer);
}
void Tell(Player_Struct p_Player)
{
	std::cout << std::endl << "The Player's name is: " << p_Player.Name;
	std::cout << std::endl << "The Player's score is: " << p_Player.Score;
}

void Exercise4()
{
	Player_Struct Players[5];
	
	int i;
	for (i = 0; i < 5; i++)
	{
		Ask(Players[i]);
		if (i < 4)
			std::cout << "-----------------------" << std::endl;
	}
	for (i = 0; i < 5; i++)
	{
		Tell(Players[i]);

		if (i < 4)
			std::cout << std::endl << "-----------------------";
	}

	End();
	New("5");
	Exercise5(Players);
}

void Exercise5(Player_Struct* p_Player)
{
	std::string input;

	std::cout << "What name are you looking for? ";
	getline(std::cin, input);

	int i;
	for (i = 0; i <= sizeof(p_Player); i++)
	{
		if (p_Player[i].Name == input)
		{
			std::cout << "Their score is: " << p_Player[i].Score;
			break;
		}
		else if (i == sizeof(p_Player))
			std::cout << "Name not found...";
	}
}

void Exercise6()
{
	Shop_Struct Shop;
	std::string input;

	while (true)
	{
		New("6");
		std::cout << "What would you like to do?" << std::endl << std::endl
			<< "a. Change the price of an item" << std::endl
			<< "b. Buy additional stock for an item" << std::endl
			<< "c. Sell stock to gain more gold" << std::endl
			<< "d. Exit shop" << std::endl << std::endl
			<< "Input: ";
		getline(std::cin, input);

		if ((input == "a")||(input == "a."))
			while (Pricing(Shop)) {}
		if ((input == "b") || (input == "b."))
			while (Buy(Shop)) {}
		if ((input == "c") || (input == "c."))
			while (Sell(Shop)) {}
		if ((input == "d") || (input == "d."))
			break;
	}
}
bool Pricing(Shop_Struct& p_Shop)
{
	char buffer[256];
	std::string input;
	bool run = true;

	New("6");

	std::cout << "Which item's value would you like to change?" << std::endl << std::endl;

	int i;
	for (i = 0; i <= sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]); i++)
	{
		if (i == sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]))
		{
			std::cout << char(i + 97) << ". Back";
			break;
		}
		std::cout << std::resetiosflags(std::ios::adjustfield);
		std::cout << std::setiosflags(std::ios::left);
		std::cout << char(i + 97) << ". " << std::setw(20) << p_Shop.Stock[i].Name << "Current Cost: ";
		if (p_Shop.Stock[i].Cost != -1)
			std::cout << p_Shop.Stock[i].Cost << "g";
		else
			std::cout << "Not For Sale!";
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl << "Input: ";
	getline(std::cin, input);

	char f[20] = { 'a','b','c','d','e','f','g','h','i','j','k', 'l', 'm', 'n', 'o', 'p'};
	
	for (i = 0; i <= sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]); i++)
	{
		if (i == sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]))
		{
			return 0;
		}
		else if ((input[0] == char(i + 97)) || ((input[0] == char(i + 97)) && (input[1] == '.')))
		{
			if (p_Shop.Stock[i].Cost != -1)
			{
				std::cout << std::endl << "What would you like to set it to? ";
				getline(std::cin, input);

				strcpy_s(buffer, input.c_str());
				p_Shop.Stock[i].Cost = atoi(buffer);
			}
			else
			{
				std::cout << std::endl << "This item has a value beyond Hylian comprehension.\nPlease select another item...";
				End();				
			}
			break;
		}
	}
	return 1;	
}
bool Buy(Shop_Struct& p_Shop)
{
	char buffer[256];
	std::string input;
	bool run = true;

	New("6");

	std::cout << "Which item do you want to buy more of? Currend Gold: " << p_Shop.Gold << "g" << std::endl << std::endl;

	int i;
	for (i = 0; i <= sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]); i++)
	{
		if (i == sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]))
		{
			std::cout << char(i + 97) << ". Back";
			break;
		}
		std::cout << std::resetiosflags(std::ios::adjustfield);
		std::cout << std::setiosflags(std::ios::left);
		std::cout << char(i + 97) << ". " << std::setw(20) << p_Shop.Stock[i].Name << "Current Quantity: ";
		if (p_Shop.Stock[i].Quantity > 0)
			std::cout << p_Shop.Stock[i].Quantity;
		else
			std::cout << "Out of Stock!";
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl << "Input: ";
	getline(std::cin, input);

	char f[20] = { 'a','b','c','d','e','f','g','h','i','j','k', 'l', 'm', 'n', 'o', 'p' };

	for (i = 0; i <= sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]); i++)
	{
		if (i == sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]))
		{
			return 0;
		}
		else if ((input[0] == char(i + 97)) || ((input[0] == char(i + 97)) && (input[1] == '.')))
		{
			if (p_Shop.Stock[i].Cost != -1)
			{
				std::cout << std::endl << "How many will you purchase? ";
				getline(std::cin, input);

				strcpy_s(buffer, input.c_str());
				if (p_Shop.Gold >= p_Shop.Stock[i].Cost*atoi(buffer))
				{
					std::cout << std::endl << "This will cost " << p_Shop.Stock[i].Cost*atoi(buffer) << "g. Are you sure Y/N? ";
					getline(std::cin, input);

					if ((input == "y") || (input == "Y"))
					{
						p_Shop.Gold -= p_Shop.Stock[i].Cost*atoi(buffer);
						p_Shop.Stock[i].Quantity += atoi(buffer);
					}
				}
				else
				{
					std::cout << std::endl << "You don't have the gold for that...";
					End();
				}
				
				p_Shop.Stock[i].Cost = atoi(buffer);
			}
			else
			{
				std::cout << std::endl << "This Item has a value beyond Hylian comprehension.\nPlease select another item...";
				End();
			}
			break;
		}
	}
	return 1;
}
bool Sell(Shop_Struct& p_Shop)
{
	char buffer[256];
	std::string input;
	bool run = true;

	New("6");

	std::cout << "Which item do you want to sell? Currend Gold: " << p_Shop.Gold << "g" << std::endl << std::endl;

	int i;
	for (i = 0; i <= sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]); i++)
	{
		if (i == sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]))
		{
			std::cout << char(i + 97) << ". Back";
			break;
		}
		std::cout << std::resetiosflags(std::ios::adjustfield);
		std::cout << std::setiosflags(std::ios::left);
		std::cout << char(i + 97) << ". " << std::setw(20) << p_Shop.Stock[i].Name << "Current Quantity: ";
		if (p_Shop.Stock[i].Quantity > 0)
			std::cout << p_Shop.Stock[i].Quantity;
		else
			std::cout << "Out of Stock!";
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl << "Input: ";
	getline(std::cin, input);

	char f[20] = { 'a','b','c','d','e','f','g','h','i','j','k', 'l', 'm', 'n', 'o', 'p' };

	for (i = 0; i <= sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]); i++)
	{
		if (i == sizeof(p_Shop.Stock) / sizeof(p_Shop.Stock[0]))
		{
			return 0;
		}
		else if ((input[0] == char(i + 97)) || ((input[0] == char(i + 97)) && (input[1] == '.')))
		{
			if (p_Shop.Stock[i].Cost != -1)
			{
				std::cout << std::endl << "How many will you sell? ";
				getline(std::cin, input);

				strcpy_s(buffer, input.c_str());
				if (p_Shop.Stock[i].Quantity - atoi(buffer) >= 0)
				{
					std::cout << std::endl << "This will give you an extra " << p_Shop.Stock[i].Cost*atoi(buffer) << "g. Are you sure Y/N? ";
					getline(std::cin, input);

					if ((input == "y") || (input == "Y"))
					{
						p_Shop.Gold += p_Shop.Stock[i].Cost*atoi(buffer);
						p_Shop.Stock[i].Quantity -= atoi(buffer);
					}
				}
				else
				{
					std::cout << std::endl << "You don't have any more of that item...";
					End();
				}

				p_Shop.Stock[i].Cost = atoi(buffer);
			}
			else
			{
				std::cout << std::endl << "This Item has a value beyond Hylian comprehension.\nPlease select another item...";
				End();
			}
			break;
		}
	}
	return 1;
}

void New(char* i)
{
	system("cls");
	std::cout << "Exercise " << i << std::endl;

	if (strlen(i) <= 1)
		std::cout << "----------";
	else
		std::cout << "-----------";

	std::cout << std::endl << std::endl;
}
void End()
{
	std::cout << std::endl << std::endl;
	system("pause");
}