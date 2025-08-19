#include <stdio.h>
#define x 5+2    // macro definition (replace x with 5+2)
 int main() {
    int a;
    a = x * x * x;   // expands to (5+2 * 5+2 * 5+2) -> wrong if no brackets
    printf("%d\n", a);
    return 0;
}
