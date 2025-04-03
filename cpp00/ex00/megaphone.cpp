#include <ctype.h>
#include <iostream>
#include <string>

int	main(int argc, char **argv) {
	std::string output;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int y = 1; argv[y]; ++y)
			output = output + argv[y];
		for (int i = 0; output[i]; ++i)
			output[i] = std::toupper(output[i]);
		std::cout << output << std::endl;
	}
	return (0);
}
