#include "kadai4.h"
#include <stdio.h>

void drawTree(int h) {
    for (int i = 1; i <= h; i++) {

        for (int j = 1; j <= h - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}