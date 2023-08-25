#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string s = av[i];
			for (unsigned long j = 0; j < s.size(); j++)
				std::cout << ((char)toupper(s[j]));
		}
	}
	std::cout << std::endl;
}
