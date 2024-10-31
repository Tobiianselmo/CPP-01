#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

std::string replaceBuffer(std::string file, std::string s1, std::string s2)
{
	std::ifstream infile;
	std::stringstream buffer;
	const char *new_file = file.c_str();
	infile.open(new_file);
	if (infile.is_open() == false)
	{
		std::cout << "Error: File could not be open." << std::endl;
		exit(1);
	}
	buffer << infile.rdbuf();
	std::string content = buffer.str();
	infile.close();
	size_t pos = content.find(s1);
	while (pos != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos = content.find(s1, pos + s2.length());
	}
	return content;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: Wrong arguments number." << std::endl;
		return 1;
	}
	std::string inf = av[1];
	std::string s1 = av[2];
	if (s1.empty())
	{
		std::cout << "Error: s1 is empty." << std::endl;
		return 1;
	}
	std::string s2 = av[3];
	std::string content;

	content = replaceBuffer(av[1], s1, s2);
	std::ofstream outfile((inf + ".replace").c_str());
	if (outfile.is_open() == false)
	{
		std::cout << "Error: File could not be open." << std::endl;
		return 1;
	}
	outfile << content;
	return 0;
}
