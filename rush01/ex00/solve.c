#include <unistd.h>
#include <stdlib.h>

int solve(int grid[4][4], int clues[4][4], int row, int col) {
    if (row == 4) return 1;
    if (col == 4) return solve(grid, clues, row + 1, 0);

    for (int i = 1; i <= 4; i++) {
        grid[row][col] = i;
        if (is_valid(grid, clues, row, col)) {
            if (solve(grid, clues, row, col + 1)) return 1;
        }
    }
    grid[row][col] = 0;
    return 0;
}
