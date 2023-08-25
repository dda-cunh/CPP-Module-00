#include "../inc/Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string n, std::string s)
{
	if (!fn.size() || !ln.size() || !nn.size() || !n.size() || !s.size())
	{
		this->fname = "";
		this->lname = "";
		this->nname = "";
		this->number = "";
		this->secret = "";
		return ;
	}
	this->fname = fn;
	this->lname = ln;
	this->nname = nn;
	this->number = n;
	this->secret = s;
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::printInfo(void)
{
	std::cout << "First Name\t" << (fname.size() ? fname : "{No first name") << std::endl;
	std::cout << "Last Name\t" << (lname.size() ? lname : "{No last name}") << std::endl;
	std::cout << "Nick Name\t" << (nname.size() ? nname : "{No nick name}") << std::endl;
	std::cout << "Number\t\t" << (number.size() ? number : "{No number}") << std::endl;
	std::cout << "secret\t\t" << (secret.size() ? secret : "{No secret}") << std::endl;
	return ;
}
