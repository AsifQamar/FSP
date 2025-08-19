#include <stdio.h>

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter bit position to clear (0-based): ");
    scanf("%u", &n);

    num = num & ~(1 << n);

    printf("Result: %u\n", num);

    return 0;
}
