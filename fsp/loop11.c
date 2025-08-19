#include <stdio.h>

int main() {
    int a = 10;

    if (printf("%d", a >= 10) - 10) {   // condition
        for(;;)                        // infinite loop
            break;                      // immediately breaks
    }
    else;   // empty else

    return 0;
}
