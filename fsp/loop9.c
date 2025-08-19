#include <stdio.h>

int f(int num) {
    return num * 5;
}

int main() {
    int i = 3, val;

    val = sizeof(f(i)) + f(i = 2) + f(i - 1);

    printf("val = %d, i = %d\n", val, i);

    return 0;
}
