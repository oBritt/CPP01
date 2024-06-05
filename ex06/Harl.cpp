
#include "Harl.hpp"

Harl::Harl(){
	return ;
}

Harl::~Harl(){
	return ;
}

void Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
	return ;
}

void Harl::error(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void Harl::info(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){

	std::string strings[4];

	strings[0] = "DEBUG";
	strings[1] = "INFO";
	strings[2] = "WARNING";
	strings[3] = "ERROR";

	void	(Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int t = -1;
	for (int i = 0; i < 4; i++)
	{
		if (strings[i] == level)
		{
			t = i;
			break ;
		}
	}
	if (t == -1)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	while (t < 4)
	{
		switch (t)
		{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*func[t])();
			break;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*func[t])();
			break;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*func[t])();
			break;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*func[t])();
			break;
		default:
			break;
		}
		std::cout << std::endl;
		t++;
	}
}
