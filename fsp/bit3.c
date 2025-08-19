#include <stdio.h>

int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Enter the bit position to get (0-indexed): ");
    scanf("%d", &i);

    // Get the ith bit
    int bit = (n >> i) & 1;

    printf("The %dth bit of %d is: %d\n", i, n, bit);

    return 0;
}
