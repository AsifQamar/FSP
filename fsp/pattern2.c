#include <stdio.h>

int main(void) {
    int rows, i, j;  

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            if (i == rows || j == 1 || j == i) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}
