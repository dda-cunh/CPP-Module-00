#ifndef	CONTACT_H
# define	CONTACT_H
#include "../inc/utils.hpp"

class	Contact
{
	public:
		std::string	fname;
		std::string	lname;
		std::string	nname;

		Contact(void);
		Contact(std::string, std::string, std::string, std::string, std::string);
		~Contact(void);

	private:
		std::string	secret;
		std::string	number;
};

#endif