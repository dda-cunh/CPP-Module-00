#include "../inc/utils.hpp"

void    print_trunc(std::string s, int last)
{
	long long slen = s.size();

	while ((10 - slen++) > 0)
		std::cout << " ";
	for (unsigned long i = 0; i < 10; i++)
	{
		if (i >= s.size())
			break ;
		if (i == 9 && s.size() > 10)
			std::cout << ".";
		else
			std::cout << s[i];
	}	
	if (!last)
		std::cout << "|";
}
