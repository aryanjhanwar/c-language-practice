#include <stdio.h>
void main()
{
    int f=1,i,n;
    printf("enter a number:");
    scanf("%d",&n);

    for(i=n;i>1;i--)
    {
        f=f*i;
    printf("%d\n",f);
    }
}