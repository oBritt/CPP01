
#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong amount of arguments" << std::endl;
		return (1);
	}
	std::string file = argv[1];
	std::string first = argv[2];
	std::string second = argv[3];
	std::ifstream input(file);
	if (!input.is_open())
	{
		std::cout << "File doesnt exists" << std::endl;
		return  (1);
	}
	if (first == "" || second == "")
	{
		std::cout << "No empty strings are allowed" << std::endl;
		return (1);
	}
	file += ".replace";
	std::ofstream out(file.c_str());
	if (!out.is_open())
	{
		std::cout << "Output couldnt be opened/created" << std::endl;
		return  (1);
	}
	std::string original = "";
	std::string temp;
	while (std::getline(input, temp))
	{
		original += temp;
		if (!input.eof())
			original += "\n";
	}
	int	ptr1 = 0;
	int ptr2 = 0;
	std::string output = "";
	while (original[ptr2])
	{
		ptr1 = ptr2;
		while (original[ptr2] != 0)
		{
			if (first == original.substr(ptr2, first.size()))
				break ;
			ptr2++;
		}
		output += original.substr(ptr1, ptr2 - ptr1);
		if (!original[ptr2])
			break;
		ptr2 += first.size();
		output += second;
	}
	out << output;
	input.close();
	out.close();
}

//tests

// ./replacer a asd 111
// ./replacer b am 11
// ./replacer c ZXC QWE