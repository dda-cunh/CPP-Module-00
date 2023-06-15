#ifndef	PHONEBOOK_H
# define	PHONEBOOK_H

# include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook(void);
		void addContact(Contact);
		void printContact(int);
		~PhoneBook();

	private:
		Contact	contacts[8];
		int		lastI;
};

#endif