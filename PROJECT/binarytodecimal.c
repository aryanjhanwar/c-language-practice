#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    int k = 0, r,digit = 0, i, t;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    t = n;
    while (t > 0)
    {
        t = t / 10;
        digit++;
    }
    for (i = 0; i < digit; i++)
    {
        r = n % 10;
        k = n + r * pow(2, i);
        n = n / 10;
    }

    printf("The decimal no: %d\n", k);
}
