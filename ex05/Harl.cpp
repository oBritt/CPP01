
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
	strings[1] = "ERROR";
	strings[2] = "WARNING";
	strings[3] = "INFO";

	void	(Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int t = 0;
	for (int i = 0; i < 4; i++)
	{
		if (level == strings[i])
		{
			(this->*func[i])();
			t = 1;
			break ;
		}
	}
	if (!t)
		std::cout << "Wrong command" << std::endl;

}
