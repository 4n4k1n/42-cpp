#include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon() = default;
		~Weapon() = default;
		const std::string	&getType(void);
		void				setType(const std::string &type);
};
