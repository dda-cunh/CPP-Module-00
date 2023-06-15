#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	lastI = 0;
	return ;
}

void	PhoneBook::addContact(Contact obj)
{
	if (this->lastI == 8)
		this->lastI = 0;
	this->contacts[lastI] = obj;
	this->lastI++;
}

void PhoneBook::printContact(int index)
{
	Contact	contact = this->contacts[index];

	std::cout << "         " << index << "|";
	print_trunc(contact.fname, 0);
	print_trunc(contact.lname, 0);
	print_trunc(contact.nname, 1);
	std::cout << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}