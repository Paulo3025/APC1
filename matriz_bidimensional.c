#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            num[i][j] = i + j;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("\t%d ", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}