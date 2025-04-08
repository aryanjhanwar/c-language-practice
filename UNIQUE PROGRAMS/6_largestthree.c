#include <stdio.h>

int main()
{
    int a, b,c;
    printf("Enter number a\n");
    scanf("%d" , &a);

    printf("Enter number b\n");
    scanf("%d" , &b);

    printf("Enter number c\n");
    scanf("%d" , &c);

    if(a>b)
    {
        if (a>c)
        {
            printf("a is largest");
        }
        else
        {
            printf("c is largest");
        }
    }
    else if(b>c)
    {
        printf("b is largest");
    }
    else {
        printf("c is largest");
    }
}