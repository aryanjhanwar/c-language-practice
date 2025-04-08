#include <stdio.h>
int main()
{
    int x;
    printf("enter value of x:");
    scanf("%d",&x);

    if(x%2==0)
    {
        if (x%4==0)
        {
            printf("x is divided by 2 and 4");
        }
        else
        {
            printf("x is divided by only 2");
        }
    }
    else 
    {
        if(x%3==0)
        
            if(x%5==0)
            {
                printf("x is divided by 3 and 5");
            }
        else 
        {
            printf("x is divided by only 3");
        }
    }
}