#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define EMPTY 0
#define W_PAWN 1
#define W_ROOK 2
#define W_KNIGHT 3
#define W_BISHOP 4
#define W_QUEEN 5
#define W_KING 6
#define B_PAWN -1
#define B_ROOK -2
#define B_KNIGHT -3
#define B_BISHOP -4
#define B_QUEEN -5
#define B_KING -6

int board[8][8];
int playerColor; 

void initBoard();
void displayBoard();
int isValidMove(int fromRow, int fromCol, int toRow, int toCol);
int makeMove(int fromRow, int fromCol, int toRow, int toCol);
void botMove();
char getPieceChar(int piece);
int parsePosition(char *pos, int *row, int *col);
int isKingInCheck(int color);
int hasValidMoves(int color);

int main() {
    char choice;
    char fromPos[3], toPos[3];
    int fromRow, fromCol, toRow, toCol;
    
    srand(time(NULL));
    
    printf("=== CHESS GAME WITH BOT ===\n\n");
    printf("Choose your color:\n");
    printf("W - White (you move first)\n");
    printf("B - Black (bot moves first)\n");
    printf("Enter choice: ");
    scanf(" %c", &choice);
    
    playerColor = (toupper(choice) == 'W') ? 1 : -1;
    
    initBoard();
    displayBoard();
    
    printf("\nEnter moves in format: e2 e4\n");
    printf("Type 'quit' to exit\n\n");
    
    while (1) {
        if (playerColor == 1) {
            
            printf("Your turn (White): ");
            scanf("%s", fromPos);
            
            if (strcmp(fromPos, "quit") == 0) break;
            
            scanf("%s", toPos);
            
            if (!parsePosition(fromPos, &fromRow, &fromCol) || 
                !parsePosition(toPos, &toRow, &toCol)) {
                printf("Invalid position format! Use format like: e2 e4\n");
                continue;
            }
            
            if (board[fromRow][fromCol] <= 0) {
                printf("That's not your piece!\n");
                continue;
            }
            
            if (isValidMove(fromRow, fromCol, toRow, toCol)) {
                makeMove(fromRow, fromCol, toRow, toCol);
                displayBoard();
                
                if (isKingInCheck(-1)) {
                    printf("Check!\n");
                    if (!hasValidMoves(-1)) {
                        printf("Checkmate! You win!\n");
                        break;
                    }
                }
                
                printf("Bot is thinking...\n");
                botMove();
                displayBoard();
                
                if (isKingInCheck(1)) {
                    printf("You are in check!\n");
                    if (!hasValidMoves(1)) {
                        printf("Checkmate! Bot wins!\n");
                        break;
                    }
                }
            } else {
                printf("Invalid move! Try again.\n");
            }
        } else {
            
            printf("Bot is thinking...\n");
            botMove();
            displayBoard();
            
            if (isKingInCheck(-1)) {
                printf("You are in check!\n");
                if (!hasValidMoves(-1)) {
                    printf("Checkmate! Bot wins!\n");
                    break;
                }
            }
            
            
            printf("Your turn (Black): ");
            scanf("%s", fromPos);
            
            if (strcmp(fromPos, "quit") == 0) break;
            
            scanf("%s", toPos);
            
            if (!parsePosition(fromPos, &fromRow, &fromCol) || 
                !parsePosition(toPos, &toRow, &toCol)) {
                printf("Invalid position format! Use format like: e7 e5\n");
                continue;
            }
            
            if (board[fromRow][fromCol] >= 0) {
                printf("That's not your piece!\n");
                continue;
            }
            
            if (isValidMove(fromRow, fromCol, toRow, toCol)) {
                makeMove(fromRow, fromCol, toRow, toCol);
                displayBoard();
                
                if (isKingInCheck(1)) {
                    printf("Check!\n");
                    if (!hasValidMoves(1)) {
                        printf("Checkmate! You win!\n");
                        break;
                    }
                }
            } else {
                printf("Invalid move! Try again.\n");
            }
        }
    }
    
    printf("\nGame Over!\n");
    return 0;
}

void initBoard() {
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j] = EMPTY;
        }
    }
    
    
    board[7][0] = W_ROOK; board[7][7] = W_ROOK;
    board[7][1] = W_KNIGHT; board[7][6] = W_KNIGHT;
    board[7][2] = W_BISHOP; board[7][5] = W_BISHOP;
    board[7][3] = W_QUEEN;
    board[7][4] = W_KING;
    for (int i = 0; i < 8; i++) board[6][i] = W_PAWN;
    
    
    board[0][0] = B_ROOK; board[0][7] = B_ROOK;
    board[0][1] = B_KNIGHT; board[0][6] = B_KNIGHT;
    board[0][2] = B_BISHOP; board[0][5] = B_BISHOP;
    board[0][3] = B_QUEEN;
    board[0][4] = B_KING;
    for (int i = 0; i < 8; i++) board[1][i] = B_PAWN;
}

void displayBoard() {
    printf("\n  a b c d e f g h\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", 8 - i);
        for (int j = 0; j < 8; j++) {
            printf("%c ", getPieceChar(board[i][j]));
        }
        printf("%d\n", 8 - i);
    }
    printf("  a b c d e f g h\n\n");
}

char getPieceChar(int piece) {
    switch (piece) {
        case EMPTY: return '.';
        case W_PAWN: return 'P';
        case W_ROOK: return 'R';
        case W_KNIGHT: return 'N';
        case W_BISHOP: return 'B';
        case W_QUEEN: return 'Q';
        case W_KING: return 'K';
        case B_PAWN: return 'p';
        case B_ROOK: return 'r';
        case B_KNIGHT: return 'n';
        case B_BISHOP: return 'b';
        case B_QUEEN: return 'q';
        case B_KING: return 'k';
        default: return '?';
    }
}

int parsePosition(char *pos, int *row, int *col) {
    if (strlen(pos) != 2) return 0;
    
    char file = tolower(pos[0]);
    char rank = pos[1];
    
    if (file < 'a' || file > 'h' || rank < '1' || rank > '8') {
        return 0;
    }
    
    *col = file - 'a';
    *row = 8 - (rank - '0');
    
    return 1;
}

int isValidMove(int fromRow, int fromCol, int toRow, int toCol) {
    
    if (fromRow < 0 || fromRow > 7 || fromCol < 0 || fromCol > 7 ||
        toRow < 0 || toRow > 7 || toCol < 0 || toCol > 7) {
        return 0;
    }
    
    int piece = board[fromRow][fromCol];
    int target = board[toRow][toCol];
    
    if (piece == EMPTY) return 0;
    if ((piece > 0 && target > 0) || (piece < 0 && target < 0)) return 0;
    
    int dRow = toRow - fromRow;
    int dCol = toCol - fromCol;
    
    
    switch (abs(piece)) {
        case 1: 
                    if (piece > 0) { 
                        
                if (dCol == 0 && dRow == -1 && target == EMPTY) return 1;
                if (dCol == 0 && fromRow == 6 && dRow == -2 && target == EMPTY && board[fromRow-1][fromCol] == EMPTY) return 1;
                if (abs(dCol) == 1 && dRow == -1 && target < 0) return 1;
            } else { 
                if (dCol == 0 && dRow == 1 && target == EMPTY) return 1;
                if (dCol == 0 && fromRow == 1 && dRow == 2 && target == EMPTY && board[fromRow+1][fromCol] == EMPTY) return 1;
                if (abs(dCol) == 1 && dRow == 1 && target > 0) return 1;
            }
            break;
            
        case 2: 
            if (dRow == 0 || dCol == 0) {
                int stepR = (dRow == 0) ? 0 : (dRow > 0 ? 1 : -1);
                int stepC = (dCol == 0) ? 0 : (dCol > 0 ? 1 : -1);
                int r = fromRow + stepR, c = fromCol + stepC;
                while (r != toRow || c != toCol) {
                    if (board[r][c] != EMPTY) return 0;
                    r += stepR; c += stepC;
                }
                return 1;
            }
            break;
            
        case 3: 
            if ((abs(dRow) == 2 && abs(dCol) == 1) || (abs(dRow) == 1 && abs(dCol) == 2))
                return 1;
            break;
            
        case 4: 
            if (abs(dRow) == abs(dCol)) {
                int stepR = dRow > 0 ? 1 : -1;
                int stepC = dCol > 0 ? 1 : -1;
                int r = fromRow + stepR, c = fromCol + stepC;
                while (r != toRow || c != toCol) {
                    if (board[r][c] != EMPTY) return 0;
                    r += stepR; c += stepC;
                }
                return 1;
            }
            break;
            
        case 5: 
                    if (dRow == 0 || dCol == 0 || abs(dRow) == abs(dCol)) {
                int stepR = (dRow == 0) ? 0 : (dRow > 0 ? 1 : -1);
                int stepC = (dCol == 0) ? 0 : (dCol > 0 ? 1 : -1);
                int r = fromRow + stepR, c = fromCol + stepC;
                while (r != toRow || c != toCol) {
                    if (board[r][c] != EMPTY) return 0;
                    r += stepR; c += stepC;
                }
                return 1;
            }
            break;
            
        case 6: 
            if (abs(dRow) <= 1 && abs(dCol) <= 1) return 1;
            break;
    }
    
    return 0;
}

int makeMove(int fromRow, int fromCol, int toRow, int toCol) {
    board[toRow][toCol] = board[fromRow][fromCol];
    board[fromRow][fromCol] = EMPTY;
    return 1;
}

void botMove() {
    int botColor = -playerColor;
    int validMoves[500][4];
    int moveCount = 0;
    
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((botColor > 0 && board[i][j] > 0) || 
                (botColor < 0 && board[i][j] < 0)) {
                for (int ti = 0; ti < 8; ti++) {
                    for (int tj = 0; tj < 8; tj++) {
                        if (isValidMove(i, j, ti, tj)) {
                            validMoves[moveCount][0] = i;
                            validMoves[moveCount][1] = j;
                            validMoves[moveCount][2] = ti;
                            validMoves[moveCount][3] = tj;
                            moveCount++;
                        }
                    }
                }
            }
        }
    }
    
    if (moveCount > 0) {
        int moveIndex = rand() % moveCount;
        int fromRow = validMoves[moveIndex][0];
        int fromCol = validMoves[moveIndex][1];
        int toRow = validMoves[moveIndex][2];
        int toCol = validMoves[moveIndex][3];
        
        char fromFile = 'a' + fromCol;
        char fromRank = '8' - fromRow;
        char toFile = 'a' + toCol;
        char toRank = '8' - toRow;
        
        printf("Bot moves: %c%c to %c%c\n", fromFile, fromRank, toFile, toRank);
        makeMove(fromRow, fromCol, toRow, toCol);
    }
}

int isKingInCheck(int color) {
        return 0; 
}

int hasValidMoves(int color) {
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((color > 0 && board[i][j] > 0) || 
                (color < 0 && board[i][j] < 0)) {
                for (int ti = 0; ti < 8; ti++) {
                    for (int tj = 0; tj < 8; tj++) {
                        if (isValidMove(i, j, ti, tj)) {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}