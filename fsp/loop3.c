#include <stdio.h>

int main() {
    int i , j ;  
    i = j =3,4;
    while (--i && j++) {
        printf("%d %d\n", i, j);
    }

    return 0;
}
