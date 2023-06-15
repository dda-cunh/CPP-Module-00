#include "../inc/Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string n, std::string s)
{
	if (!fn.size() || !ln.size() || !nn.size() || !n.size() || !s.size())
		return ;
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