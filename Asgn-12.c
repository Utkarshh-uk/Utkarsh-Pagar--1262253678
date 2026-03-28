#include <stdio.h>

int main() {
    int num1, num2, i;
    int gcd, smallestDivisor = -1;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find Smallest Common Divisor (other than 1)
    for (i = 2; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            smallestDivisor = i;
            break;
        }
    }

    // Find GCD using simple method
    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // Output
    if (smallestDivisor != -1)
        printf("Smallest Common Divisor = %d\n", smallestDivisor);
    else
        printf("No common divisor other than 1\n");

    printf("GCD = %d", gcd);

    return 0;
} 