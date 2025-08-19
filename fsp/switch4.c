#include <stdio.h>

int main() {
    switch (*(1 + "AB" + "CD" + 1)) {
        case 'A': 
            printf("aaaa\n");
        case 'b': 
            printf("bbb\n");
        case 'c': 
            printf("ccc\n");
        case 'd': 
            printf("ddd\n");
        
    }
    return 0;
}
