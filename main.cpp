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

char* stateName(int playerState) {
  if (playerState == 0) {
    return "Circle";
  } else {
    return "Cross";
  }
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
      std::cout << "Circle's turn.\n";
    else
      std::cout << "Crosse's turn.\n";

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
      std::cout << "Circle has won!";
      inGame = false;
    }

    if (checkWin(board, 2)) {
      std::cout << "Cross has won!";
      inGame = false;
    }

    if (inGame) {
      std::cout << "Select> ";
      std::cin >> input;
    }

    if (input == 0) {
      std::cout << stateName(playerState) << " has forfeited.\n";
      inGame = false;
    }

    if (input < 0 || input > 9) {
      std::cout << "No such cell.\n";
      continue;
    } else {
      board[(input - 1) / 3][(input - 1) % 3] = playerState + 1;
    }

    if (playerState == 0) {
      playerState = 1;
    } else if (playerState == 1) {
      playerState = 0;
    }

    if (std::cin.fail()) {
      std::cout << "Input failed.\n";
      inGame = false;
      return 1;
    }
  }
}
