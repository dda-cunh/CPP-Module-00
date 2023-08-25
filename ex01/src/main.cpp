#include "../inc/PhoneBook.hpp"

bool	eof = false;

void	search_event(PhoneBook & book)
{
	unsigned long	index;
	std::string		buff;
	long			factor;

	std::cout << std::endl <<
		"     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < 8; i++)
		book.printContact(i);
	std::cout << "Insert the contact index to lookup:\t";
	if (!std::getline(std::cin, buff))
	{
		std::cout << std::endl;
		eof = true;
		return ;
	}
	factor = 1;
	for (unsigned long i = 1; i < buff.size(); i++)
		factor *= 10;
	index = sToUL(buff, 0, factor);
	if (index > 7)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	book.getContact(index).printInfo();
	return ;
}

void	add_event(PhoneBook & book)
{
	std::string		dataNames[5] = {"first name", "last name", "nickname",
								"phone number","darkest secret"};
	std::string		data[5];
	Contact			contact;

	for (int i = 0; i < 5; i++)
	{
		if (i < 4)
			std::cout << "Please insert the " + dataNames[i] + ":\t\t";
		else
			std::cout << "Please insert the " + dataNames[i] + ":\t";
		if (!std::getline(std::cin, data[i]))
		{
			std::cout << std::endl;
			eof = true;
			return ;
		}
	}
	contact = Contact(data[0], data[1], data[2], data[3], data[4]);
	book.addContact(contact);
	std::cout << "Contact created" << std::endl;
	return ;
}

int	prompt(PhoneBook & phonebook)
{
	std::string	action;

	std::cout << std::endl << "Please Input a command:" << std::endl;
	std::cout << "ADD | SEARCH | EXIT" << std::endl;
	if (!std::getline(std::cin, action))
	{
		eof = true;
		return (1);
	}
	if (action.compare("\n") == 0)
		return (0);
	if (action.compare("EXIT") == 0)
		return (1);
	else if (action.compare("ADD") == 0)
		add_event(phonebook);
	else if (action.compare("SEARCH") == 0)
		search_event(phonebook);
	else
		std::cout << "INVALID COMMAND" << std::endl;
	return (0);
}

int	main(void)
{
	PhoneBook	phonebook;

	while (!prompt(phonebook) && !eof)
		;
	return (eof);
}