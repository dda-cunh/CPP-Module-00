#include "../inc/PhoneBook.hpp"
#include <string>

void	search_event(PhoneBook *book)
{
	std::cout << std::endl <<
		"     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < 8; i++)
		book->printContact(i);
	return ;
}

void	add_event(PhoneBook *book)
{
	Contact		contact;
	std::string	dataNames[5] = {"first name", "last name", "nickname",
								"phone number","darkest secret"};
	std::string	data[5];

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please insert the " + dataNames[i] + ":\t";
		std::cin >> data[i];
	}
	contact = Contact(data[0], data[1], data[2], data[3], data[4]);
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
