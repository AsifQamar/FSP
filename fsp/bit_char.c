#include <stdio.h>
int main() {
    char ch = 321;  // wraps around → 65
    printf("%d, %c\n", ch, ch);
    return 0;
}
