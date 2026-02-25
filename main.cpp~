#include <iostream>

int main(){
	bool in_game = false;
	int board[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int player_state = 0; // 0 is circle, 1 is cross

	int input = 0;
	if(player_state == 0) std::cout << "Circle starts the game\n";
	else std::cout << "Cross starts the game\n";
	while(in_game){
		std::cin >> input;
		if(std::cin.fail()){
			std::cout << "Input failed\n";
		}
	}
}
