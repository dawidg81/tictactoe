#include "game.hpp"
#include <iostream>

int menu(int input){
	std::cout << "= MAIN MENU =\n"
							 "1. Local Game\n";
	std::cout << "Select> ";
	std::cin >> input;

	return input;

	if (std::cin.fail()) {
		std::cout << "Input failed.\n";
		return 1;
	}
}