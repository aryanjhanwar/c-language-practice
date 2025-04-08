#include <stdio.h>

int main()
{
   int a;
    printf("Enter number a\n");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("the number is positive");
    }
    if (a == 0)
    {
        printf("the number is zero");
    }
    if (a < 0)
    {
        printf("the number is negative");
    }
}
