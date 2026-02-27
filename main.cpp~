#include <iostream>

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

int main() {
  bool inGame = true;
  int board[3][3] = {// 0 is nothing, 1 is circle, 2 is cross
                     {0, 0, 0},
                     {0, 0, 0},
                     {0, 0, 0}};
  int playerState = 0; // 0 is circle, 1 is cross

  int input = 0;
  while (inGame) {
    if (playerState == 0)
      std::cout << "Circle's turn\n";
    else
      std::cout << "Crosse's turn\n";

    std::cout << "_____________\n"
              << "| " << symbol(board[0][0]) << " | " << symbol(board[0][1])
              << " | " << symbol(board[0][2]) << " |\n"
              << "|---|---|---|\n"
              << "| " << symbol(board[1][0]) << " | " << symbol(board[1][1])
              << " | " << symbol(board[1][2]) << " |\n"
              << "|---|---|---|\n"
              << "| " << symbol(board[2][0]) << " | " << symbol(board[2][1])
              << " | " << symbol(board[2][2]) << " |\n"
              << "-------------\n";

    std::cout << "Select cell number to mark: ";
    std::cin >> input;

    board[(input - 1) / 3][(input - 1) % 3] = playerState + 1;

    if (playerState == 0) {
      playerState = 1;
    } else if (playerState == 1) {
      playerState = 0;
    }

    if (board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 1 && ||
        board[0][1] == 1 && board[1][1] == 1 && board[2][1] == 1 && ||
        board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 1 && ||
        board[0][0] == 1 && board[0][1] == 1 && board[0][2] == 1 && ||
        board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 1 && ||
        board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 1 && ||
        board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1 && ||
        board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 1 && ||) {
	    std::cout << "Circle has won!";
	    inGame = false;
    }

    if (board[0][0] == 2 && board[1][0] == 2 && board[2][0] == 2 && ||
        board[0][1] == 2 && board[1][1] == 2 && board[2][1] == 2 && ||
        board[0][2] == 2 && board[1][2] == 2 && board[2][2] == 2 && ||
        board[0][0] == 2 && board[0][1] == 2 && board[0][2] == 2 && ||
        board[1][0] == 2 && board[1][1] == 2 && board[1][2] == 2 && ||
        board[2][0] == 2 && board[2][1] == 2 && board[2][2] == 2 && ||
        board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 2 && ||
        board[0][2] == 2 && board[1][1] == 2 && board[2][0] == 2 && ||) {
	    std::cout << "Cross has won!"; 
	    inGame = false;
    }

    if (std::cin.fail()) {
      std::cout << "Input failed\n";
      inGame = false;
      return 1;
    }
  }
}
