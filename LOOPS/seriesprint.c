#include <stdio.h>

void main()
{
    int n;
    float sum = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        sum = sum + 1.0 / i;
    }

    printf("The sum of the series is: %f\n", sum);
}