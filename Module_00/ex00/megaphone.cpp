#include<iostream>

int	main(int argc, char **argv)
{
	int i;
	int j;
	char c;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				c = argv[i][j] - 32;
			   	std::cout << c ;
			}
			else
				std::cout << argv[i][j];
		}
		if (argv[i + 1])
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}

