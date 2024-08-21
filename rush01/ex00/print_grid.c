#include <unistd.h>
#include <stdlib.h>

void print_grid(int grid[4][4]) {
    char c;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            c = grid[i][j] + '0';
            write(1, &c, 1);
            if (j < 4 - 1) write(1, " ", 1);
        }
        write(1, "\n", 1);
    }
}
