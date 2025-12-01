#pragma once
#include <string>

#define MSG_DEBUG "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !"
#define MSG_INFO "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define MSG_WARNING "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define MSG_ERROR "[ERROR] This is unacceptable! I want to speak to the manager now."

class Harl
{
	private:
		std::string _levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		void (Harl::*_funcs[4])() = {
			&Harl::debug, 
			&Harl::info, 
			&Harl::warning, 
			&Harl::error};
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl() = default;
		~Harl() = default;
		void complain(std::string level);
};
