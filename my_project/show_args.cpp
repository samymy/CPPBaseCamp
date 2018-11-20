#include "show_args.hpp"

#include <iostream>

void	show_args(char** args) {

	while (*++args)
		std::cout << *args << std::endl;
}
