#include <unistd.h>
#include <stdlib.h>

void reverse(int *row) {
    for (int i = 0; i < 4 / 2; i++) {
        int temp = row[i];
        row[i] = row[4 - 1 - i];
        row[4 - 1 - i] = temp;
    }
}
