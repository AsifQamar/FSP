#include <stdio.h>
enum cricket {
    tylor,          // defaults to 0
    kalis = 17,     // explicitly 17
    chandarpaul     // becomes 18
};


enum cricket x;

int main() {
    x = tylor | (kalis & chandarpaul);
    
    printf("%d\n", x);

    return 0;
}
