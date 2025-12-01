#include "Sed.hpp"
#include "color.hpp"
#include <iostream>
#include <sstream>
#include <fstream>

Sed::Sed(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2) {}

std::string		Sed::readFileContent(void)
{
	std::ifstream	infile(_filename);

	if (!infile.is_open())
	{
		std::cerr << RED << "Failed to open file!" << RESET << std::endl;
		return ("");
	}
	std::stringstream	buf;
	buf << infile.rdbuf();
	infile.close();
	return (buf.str());
}

std::string	Sed::replaceAll(std::string file_input)
{
	std::string	buf;
	std::size_t	pos = 0;
	std::size_t	prev;

	buf.reserve(file_input.size());
	while (true)
	{
		prev = pos;
		pos = file_input.find(_s1, pos);
		if (pos == std::string::npos)
			break;
		buf.append(file_input, prev, pos - prev);
		buf +=_s2;
		pos += _s1.size();
	}
	buf.append(file_input, prev, file_input.size() - prev);
	return (buf);
}

bool	Sed::writeToReplaceFile(const std::string &buf)
{
	std::stringstream	new_filename;
	new_filename << _filename << ".replace";
	std::ofstream	out_file(new_filename.str());
	if (!out_file.is_open())
	{
		std::cerr << RED << "Failed to open file!" << RESET << std::endl;
		return (false);
	}
	out_file << buf;
	out_file.close();
	return (true);
}

bool	Sed::replace(void)
{
	std::string	file_content = readFileContent();
	if (file_content.empty())
		return (false);
	std::string	buf = replaceAll(file_content);
	return (writeToReplaceFile(buf));
}
