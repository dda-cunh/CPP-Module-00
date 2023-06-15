#include "PhoneBook.hpp"

void	search_event(PhoneBook *book)
{
	for (int i = 0; i < 8; i++)
		book->printContact(i);
	return ;
}

void	add_event(PhoneBook *book)
{
	std::string	fname;
	std::string	lname;
	std::string	nname;
	std::string	number;
	std::string	secret;
	Contact		contact;

	std::cout << "Please insert the first name of the contact:\t";
	std::cin >> fname;
	std::cout << "Please insert the last name:\t";
	std::cin >> lname;
	std::cout << "Please insert the nick name:\t";
	std::cin >> nname;
	std::cout << "Please insert the number:\t";
	std::cin >> number;
	std::cout << "Please insert the darkest secret about " + fname + ":\t";
	std::cin >> secret;
	contact = Contact(fname, lname, nname, number, secret);
	book->addContact(contact);
	std::cout << "Contact created" << std::endl;
	return ;
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	action;

	while (true)
	{
		std::cout.flush();
		std::cout << "Please Input a command:" << std::endl;
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" << std::endl;
		std::cout << "EXIT" << std::endl;
		std::cin >> action;
		if (action.compare("EXIT") == 0)
			break ;
		else if (action.compare("ADD") == 0)
			add_event(&phonebook);
		else if (action.compare("SEARCH") == 0)
			search_event(&phonebook);
		else
			std::cout << "INVALID COMMAND" << std::endl;
	}
}
