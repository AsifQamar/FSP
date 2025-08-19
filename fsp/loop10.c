#include <stdio.h>

int main() {
    char a = 250;
    int expr;
    expr = a + !a + ~a + ++a;
    printf("%d\n", expr);
    return 0;
}
