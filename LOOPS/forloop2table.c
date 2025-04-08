#include <stdio.h>
void main()
{
    int x,i,f;
    printf("enter a number:");
    scanf("%d",&x);
    printf("table of %d:\n",x);
    for(i=1;i<=10;i++)

    {
    f=x*i;
    printf("%d x %d = %d\n",x,i,f);

    }
    
}