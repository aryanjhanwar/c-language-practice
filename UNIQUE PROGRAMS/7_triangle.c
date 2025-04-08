#include <stdio.h>

int main()
{
    int a, b, c;
    printf("FIRST SIDE OF TRIANGLE a\n");
    scanf("%d", &a);

    printf("SECOND SIDE OF TRIANGLE b\n");
    scanf("%d", &b);
    printf("THIRD SIDE OF TRIANGLE c\n");
    scanf("%d", &c);

    if (a == c)
    {
        if (a == b)
        {
            printf("triangle is equilateral");
        }
        else
        {
            printf("triangle is isosceles");
        }
        
    }
    else if(a==b)
        {
            printf("triangle is isosceles");
        }
        else{
            printf("triangle is scalene");
        }
}
