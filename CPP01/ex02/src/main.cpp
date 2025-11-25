#include "iostream"

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "Address:\n"
		<< "	string   : " << &string << "\n"
		<< "	stringPTR: " << stringPTR << "\n"
		<< "	stringREF: " << &stringREF<< "\n"
		<< "Value:\n"
		<< "	string   : " << string << "\n"
		<< "	stringPTR: " << *stringPTR << "\n"
		<< "	stringREF: " << stringREF << std::endl;

	return (0);
}
