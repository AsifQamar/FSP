#include <stdio.h>

int main() {
    int x = 3, y = 4, z = 4;
    printf("%d\n", z >= y >= x ? 100 : 200);
    return 0;
}
