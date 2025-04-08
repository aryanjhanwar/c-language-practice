#include <stdio.h>

int main()
{
    int n1, n2, gcd, i;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    // Ensure positive inputs
    if (n1 < 0)
    {
        n1 = -n1;
    }
    if (n2 < 0)
    {
        n2 = -n2;
    }

    // Find GCD by checking divisors
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    // Print the GCD
    printf("GCD of %d and %d is %d\n", n1, n2, gcd);

    return 0;
}
