#include <stdio.h>
void main()
{
    int i, j, s;

    for (i = 1; i <= 10; i++)
    {
        for (s = 1; s <= 11- i; s++)
        {
            printf(" ");
        }
        for (j = 1; j<= (2*i)- 1; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    for (i = 1; i <= 19; i++){
        for (s = 1; s<= i; s++)
        {
            printf(" ");
        }
        for (j = 1; j<= 19-(2*i); j++)
        {
            printf("*");
        }
        printf("\n");
    }
        

}