#include <stdio.h>

int isPowerOfTwo(int n) {
    return (n & (n - 1)) == 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    if (isPowerOfTwo(num))
        printf("%u is a power of 2.\n", num);
    else
        printf("%u is not a power of 2.\n", num);

    return 0;
}