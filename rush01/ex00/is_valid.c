#include <unistd.h>
#include <stdlib.h>

int is_valid(int grid[4][4], int clues[4][4], int row, int col) {
    int temp[4];

    if (col == 4) {
        for (int i = 0; i < 4; i++) temp[i] = grid[row][i];
        if (count_visible(temp) != clues[0][row]) return 0;
        reverse(temp);
        if (count_visible(temp) != clues[1][row]) return 0;
    }

    if (row == 4 - 1 && col < 4) {
        for (int i = 0; i < 4; i++) temp[i] = grid[i][col];
        if (count_visible(temp) != clues[2][col]) return 0;
        reverse(temp);
        if (count_visible(temp) != clues[3][col]) return 0;
    }

    return 1;
}
