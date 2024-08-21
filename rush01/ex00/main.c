#include <unistd.h>
#include <stdlib.h>

int main() {
    int grid[4][4] = {0};  // 4x4 grid initialized to 0
    int clues[4][4] = {
        {2, 2, 1, 3},  // Left clues
        {2, 3, 2, 1},  // Right clues
        {2, 1, 3, 2},  // Top clues
        {3, 2, 1, 2}   // Bottom clues
    };

    if (solve(grid, clues, 0, 0)) {
        print_grid(grid);
    } else {
        write(1, "No solution\n", 12);
    }

    return 0;
}
