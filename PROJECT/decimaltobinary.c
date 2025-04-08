#include<stdio.h>
void main()
{
    int i,j,k,l,n;

    printf("Enter A decimal Number");
    scanf("%d",&n);

    int a[20];
    for(i=0;i<=8;i++)
    {
        k=n%2;
        n=n/2;
        a[i]=k;
    }

    for(i=8;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}