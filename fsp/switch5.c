#include <stdio.h>

int main() {
    switch(5 || 2 | 1) {
        case 3 & 2: 
            printf("aav");
            break;
        case -~10: 
            printf("bbbb\n");
            break;
        case 6 - 3 << 2: 
            printf("ccccc");
            break;
        case 5 >= 5: 
            printf("dddddd");
            break;
    
    }
    return 0;
}
