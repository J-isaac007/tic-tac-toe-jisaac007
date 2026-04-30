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
    // parse the input and update the board accordingly
    if (move.length() != 2) {
        std::cout << "Invalid move format. Please enter a valid move.";
        return;
    }
    /* 
     * I converted the input from char to int because the compiler doesn't allow char as array index.
     * I also subtracted 'A' and '1'(their ascii values) from the input 
     * to get the correct row and column indices for the board array
     */ 
    int row = static_cast<int>(move[0] - 'A');
    int col = static_cast<int>(move[1] - '1');
    if (row < 0 || row > 2 || col < 0 || col > 2) {
        std::cout << "Invalid move. Please enter a valid move.";
        --turn;
        return;
    }
    if (board[row][col] != ' ') {
        std::cout << "Cell is already occupied. Please choose another cell.";
        --turn;
        return;
    }
    board[row][col] = (turn % 2 == 0) ? 'X' : 'O';
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