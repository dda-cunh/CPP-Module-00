#include <iostream>

void    printCap(char c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    std::cout << c;
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < ac; i++)
        {
            std::string s = av[i];
            for (unsigned long j = 0; j < s.size(); j++)
                printCap(s[j]);
        }
    }
    std::cout << std::endl;
}