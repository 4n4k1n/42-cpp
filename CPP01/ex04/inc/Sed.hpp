#pragma once
#include <string>
#include <fstream>

class Sed
{
	private:
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;
		std::string	readFileContent(void);
		std::string	replaceAll(std::string file_input);
		bool		writeToReplaceFile(const std::string &buf);
	public:
		Sed(std::string filename, std::string s1, std::string s2);
		~Sed() = default;
		bool		replace(void);
};
