#include <stdio.h>

int main() {
    int i = 5, j;
    j = ++i + ++i + ++i + ++i;
    printf("i = %d, j = %d\n", i, j);
    return 0;
}
