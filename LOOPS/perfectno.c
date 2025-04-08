#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input: Get the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check divisors and calculate their sum
    for (int i = 1; i <= n/2; i++) { // Divisors are less than or equal to n/2
        if (n % i == 0) { // If i is a divisor of n
            sum += i;
        }
    }

    // Check if the number is perfect
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

}

