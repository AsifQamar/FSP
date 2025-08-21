#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;
    unsigned long long sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
        sum += factorial(i);

    printf("Sum of even factorials up to %d is: %llu\n", n, sum);
    return 0;
}
