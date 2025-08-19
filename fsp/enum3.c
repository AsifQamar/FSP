#include <stdio.h>

const enum alpha {
    x, 
    y = 5, 
    z
} p = 10;

int main() {
    enum alpha a, b;
    a = x;
    b = z;
    printf("%d\n", a + b - p);
    return 0;
}
