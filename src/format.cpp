#include "utils.hpp"

char symbol(int v) {
	if (v == 0) {
		return ' ';
	} else if (v == 1) {
		return 'O';
	} else if (v == 2) {
		return 'X';
	}
	return ' ';
}

std::string stateName(int playerState) {
	if (playerState == 0) {
		return "Circle";
	} else {
		return "Cross";
	}
}