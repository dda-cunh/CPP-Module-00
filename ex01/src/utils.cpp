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

unsigned long	sToUL(std::string & str, unsigned long index, long factor)
{
	if (index >= str.size())
		return (0);
	if (str[index] < 0x30 || str[index] > 0x39)
		return (-1);
	return (((int)str[index] - 48) * factor + sToUL(str, index + 1, factor / 10));
}
