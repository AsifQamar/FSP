#include <stdio.h>

struct A {
    char c;
    int i;
}; 

int main() {

    struct A obj;
    obj.c = 'X';
    obj.i = 42;

    printf("Character: %c\n", obj.c);
    printf("Integer: %d\n", obj.i);

    return 0;
}
