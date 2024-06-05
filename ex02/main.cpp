

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Addresses " << std::endl;

	std::cout << "String address is: " << &str << std::endl;
	std::cout << "Pointer address is: " << stringPTR << std::endl;
	std::cout << "Reference adress is: " << &stringREF << std::endl;

	std::cout << std::endl << std::endl << std::endl;

	std::cout << "Values" << std::endl;
	std::cout << "String value is: " << str << std::endl;
	std::cout << "Pointer value is: " << *stringPTR << std::endl;
	std::cout << "Reference value is: " << stringREF << std::endl;
}
