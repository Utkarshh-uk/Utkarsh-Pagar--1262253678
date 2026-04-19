#include <stdio.h>

int main() {
    int n, i;
    float x, sum = 0, term;
    float num, den;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        num = 1;
        den = 1;

        // Calculate x^(2*i+1)
        for(int j = 1; j <= (2*i+1); j++) {
            num = num * x;
        }

        // Calculate factorial (2*i+1)!
        for(int j = 1; j <= (2*i+1); j++) {
            den = den * j;
        }

        term = num / den;

        // Alternate sign
        if(i % 2 != 0) {
            term = -term;
        }

        sum = sum + term;
    }

    printf("Sum of sine series = %f", sum);

    return 0;
}