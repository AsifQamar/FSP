#include <stdio.h>

int main() {
    int x = 011; // octal 11 = decimal 9
    int i;
    
    for(i = 0; i < x; i += 3) {
        printf("start\n");
        continue;
    
    printf("end");
    return 0;
}
}