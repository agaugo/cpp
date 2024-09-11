#include <_ctype.h>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string output;
		for (int i = 1; i < argc; ++i)
			output += argv[i];
		int y = -1;
		while (output[++y] != '\0')
			output[y] = std::toupper(output[y]);
		std::cout << output << std::endl;
	}
	return 0;
}
