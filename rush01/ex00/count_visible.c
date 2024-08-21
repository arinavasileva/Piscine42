#include <unistd.h>
#include <stdlib.h>

int count_visible(int *row) {
    int max = 0, visible = 0;
    for (int i = 0; i < 4; i++) {
        if (row[i] > max) {
            max = row[i];
            visible++;
        }
    }
    return visible;
}
