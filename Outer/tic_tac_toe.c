#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void displayBoard();
int checkWin();
void makeMove();

// Game variables
char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};
char currentPlayer = 'X';

// Function to display the game board
void displayBoard() {
    system("clear");  // For Linux/Mac
    // system("cls"); // For Windows
    printf("\n");
    printf("Tic-Tac-Toe Game\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[0][0], board[0][1], board[0][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[1][0], board[1][1], board[1][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[2][0], board[2][1], board[2][2]);
    printf("     |     |     \n\n");
}

// Function to check for a winner or draw
int checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return 1;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return 1;
        }
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return 1;
    }
    // Check for a draw
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return 0;
            }
        }
    }
    return -1;
}

// Function to handle a player's move
void makeMove() {
    int choice;
    printf("Player %c, enter a number (1-9) to place your mark: ", currentPlayer);
    scanf("%d", &choice);

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    // Check if the move is valid
    if (choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
        printf("Invalid move! Try again.\n");
        makeMove();
    } else {
        board[row][col] = currentPlayer;
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

// Main function to run the game loop
int main() {
    int gameStatus;
    
    do {
        displayBoard();
        makeMove();
        gameStatus = checkWin();
    } while (gameStatus == 0);

    displayBoard();
    
    if (gameStatus == 1) {
        printf("Player %c wins!\n", (currentPlayer == 'X') ? 'O' : 'X');
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}
