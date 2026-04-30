#include <iostream>
#include <string>

void table(char board[3][3]) {
    std::cout << "  1   2   3" << '\n';
    std::cout << "A " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " " << '\n';
    std::cout << " ---+---+---" << '\n';
    std::cout << "B " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " " << '\n';
    std::cout << " ---+---+---" << '\n';
    std::cout << "C " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " " << '\n';
}

void clearScreen() {
    // This function will clear the console screen
    // On Windows system("cls"), and on Unix/Linux system("clear")
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void playerInput(char board[3][3], std::string move, int &turn) {

    clearScreen();
    if (move.length() != 2) {
        std::cout << "Invalid move format. Please enter a move like A1, B2, etc." << '\n';
        return;
    }
    else if (turn % 2 == 0) {
        if (move == "A1") {
            if (board[0][0] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[0][0] = 'X';
            }
        }
        else if (move == "A2") {
            if (board[0][1] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[0][1] = 'X';
            }
        }
        else if (move == "A3") {
            if (board[0][2] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[0][2] = 'X';
            }
        }
        else if (move == "B1") {
            if (board[1][0] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[1][0] = 'X';
            }
        }
        else if (move == "B2") {
            if (board[1][1] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[1][1] = 'X';
            }
        }
        else if (move == "B3") {
            if (board[1][2] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[1][2] = 'X';
            }
        }
        else if (move == "C1") {
            if (board[2][0] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[2][0] = 'X';
            }
        }
        else if (move == "C2") {
            if (board[2][1] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[2][1] = 'X';
            }
        }
        else if (move == "C3") {
            if (board[2][2] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[2][2] = 'X';
            }
        }
    }
    else {
        if (move == "A1") {
            if (board[0][0] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[0][0] = 'O';
            }
        }
        else if (move == "A2") {
            if (board[0][1] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;     
                return;
            } else {
                board[0][1] = 'O';
            }
        }
        else if (move == "A3") {
            if (board[0][2] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[0][2] = 'O';
            }
        }
        else if (move == "B1") {
            if (board[1][0] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[1][0] = 'O';
            }
        }
        else if (move == "B2") {
            if (board[1][1] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[1][1] = 'O';
            }
        }
        else if (move == "B3") {
            if (board[1][2] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[1][2] = 'O';
            }
        }
        else if (move == "C1") {
            if (board[2][0] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[2][0] = 'O';
            }
        }
        else if (move == "C2") {
            if (board[2][1] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[2][1] = 'O';
            }
        }
        else if (move == "C3") {
            if (board[2][2] != ' ') {
                clearScreen();
                std::cout << "Invalid move. Cell already occupied. Please try again.";
                --turn;
                return;
            } else {
                board[2][2] = 'O';
            }
        }
    }
}
void playGame() {
    // This function will handle the logic of playing the game
    // The game loop, player turns, and win conditions will be implemented here
    std::cout << "Great! Let's start the game!";
    std::cout << '\n';
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    for (int i = 0; i < 9; ++i) {
        // Placeholder for game logic
        std::cout << '\n';
        if (i % 2 == 0) {
            std::cout << "| Player 1 |" << '\n';
        } else {
            std::cout << '\n' << "| Player 2 |" << '\n';
        }
        table(board);
        std::cout << '\n';
        std::cout << "Enter your move (e.g., A1, B2): ";
        std::string move;
        std::cin >> move;
        // Logic to update the board based on the player's move
        playerInput(board, move, i);
    }
}

void intro() {
    std::cout<< "Welcome to Tic-Tac-Toe!" << '\n';
    std::cout<< "Would you like to play? (y/n): ";
    char choice;
    std::cin >> choice;
    std::cout << '\n';
    if (choice == 'y' || choice == 'Y') {
        playGame();
    } else {
        std::cout << "Maybe next time. Goodbye!" << '\n';
    }
}

int main() {
    intro();
    return 0;
}