#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i = 1;
		int j = 0;
		char c;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				{
					c = std::toupper(argv[i][j]);
					std::cout << c;
				}
				else
					std::cout << argv[i][j];
				j++;
			}
			i++;
		}
		std::cout << "" << std::endl;
	}
	return (0);
}