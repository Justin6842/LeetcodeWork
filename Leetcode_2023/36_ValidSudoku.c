//Note: bool was avaiable in c on leetcode, not exactly functional directly for c
bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    int search[10][3][9] = {0}; //2d: 0-row, 1-col, 2-area
    int x;
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if (board[i][j] != '.'){
                x = (int)(board[i][j]-48);
                if (search[x][0][i] == 1) return false;
                else if (search[x][1][j] == 1) return false;
                else if (search[x][2][(i/3)+3*(j/3)] == 1) return false;
                else{
                    search[x][0][i]++;
                    search[x][1][j]++;
                    search[x][2][(i/3)+3*(j/3)]++;
                }
            }
        }
    }
    return true;
}