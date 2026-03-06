#include <iostream>

bool checkWin(int board[3][3], int player) {
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
      return true;
    if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
      return true;
  }

  if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
    return true;
  if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
    return true;

  return false;
}

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

int main() {
  std::string player1, player2;
  bool inGame = true;
  int board[3][3] = {// 0 is nothing, 1 is circle, 2 is cross
                     {0, 0, 0},
                     {0, 0, 0},
                     {0, 0, 0}};
  int playerState = 0; // 0 is circle, 1 is cross
  int input = 0;
  int gameInput = 0;

  std::cout << "= MAIN MENU =\n"
               "1. Local Game\n";
  std::cout << "Select> ";
  std::cin >> input;

  if (std::cin.fail()) {
    std::cout << "Input failed.\n";
    return 1;
  }

  if (input == 1) {

    std::cout << "Enter nickname for Player 1: ";
    std::cin >> player1;
    std::cout << "Enter nickname for player 2: ";
    std::cin >> player2;

    while (inGame) {
      if (playerState == 0)
        std::cout << player1 << "'s (Circle) turn.\n";
      else
        std::cout << player2 << "'s (Cross) turn.\n";

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

      if (checkWin(board, 1)) {
        std::cout << player1 << " (Circle) has won!";
        inGame = false;
      }

      if (checkWin(board, 2)) {
        std::cout << player2 << " (Cross) has won!";
        inGame = false;
      }

      if (inGame) {
        std::cout << "Select> ";
        std::cin >> gameInput;
      }

      if (gameInput == 0) {
        std::cout << stateName(playerState) << " has forfeited.\n";
        inGame = false;
      }

      if (gameInput < 0 || gameInput > 9) {
        std::cout << "No such cell.\n";
        continue;
      } else {
        board[(gameInput - 1) / 3][(gameInput - 1) % 3] = playerState + 1;
      }

      if (playerState == 0) {
        playerState = 1;
      } else if (playerState == 1) {
        playerState = 0;
      }

      if (std::cin.fail()) {
        std::cout << "gameInput failed.\n";
        inGame = false;
        return 1;
      }
    }
  }
}
