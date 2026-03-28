#include <stdio.h>
#include <math.h>

// Function to check prime
int isPrime(int n) {
    int i;
    if (n <= 1)
        return 0;

    for (i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Function for factorial
int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function for prime factors
void primeFactors(int n) {
    int i;
    printf("Prime factors are: ");
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
}

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Square Root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check Prime\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Square Root = %.2f", sqrt(num));
            break;

        case 2:
            printf("Square = %d", num * num);
            break;

        case 3:
            printf("Cube = %d", num * num * num);
            break;

        case 4:
            if (isPrime(num))
                printf("Number is Prime");
            else
                printf("Number is Not Prime");
            break;

        case 5:
            printf("Factorial = %d", factorial(num));
            break;

        case 6:
            primeFactors(num);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}