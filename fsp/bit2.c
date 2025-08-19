#include <stdio.h>
int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter the bit position to set (0-indexed): ");
    scanf("%d", &i);
    
    // Set the ith bit
    n |= (1 << i);
    
    printf("Number after setting the %dth bit: %d\n", i, n);
    
    return 0;
}