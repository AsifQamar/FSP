#include <stdio.h>

int main() {
    int x = 25;

    if (!!x)
        printf("%d\n", !x);
    else
        printf("%d\n", x);

    return 0;
}
