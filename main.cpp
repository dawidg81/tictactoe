#include <iostream>

int main(){
	bool in_game = false;
	int board[3][3] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};
	int board_state = 0;
	int player_state = 0; // 0 is circle, 1 is cross

	int input = 0;
	while(in_game){
		if(player_state == 0) std::cout << "Circle's turn\n";
		else std::cout << "Crosse's turn\n";
		std::cin >> input;
		if(std::cin.fail()){
			std::cout << "Input failed\n";
		}
		switch(input){
			case 1: break;
			case 2: break;
			case 3: break;
			case 4: break;
			case 5: break;
			case 6: break;
			case 7: break;
			case 8: break;
			case 9: break;
		}
	}
}
