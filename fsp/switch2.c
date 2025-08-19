#include <stdio.h>

int main() {
    int movie = 1;

    switch (movie <<2 + movie) {
        default: printf("dddd");
        case 4:
            printf("aaa\n");
        case 5:
            printf("bbbb\n");
        case 8:
            printf("cccc\n");
    }

    return 0;
}
// here if 1<< 3. then 1000. and if 1<<2 then 100