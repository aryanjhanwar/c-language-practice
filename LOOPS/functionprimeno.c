#include<stdio.h>
void prime(int n);
void main()
{
    int n;
    printf("Enter A No.:");
    scanf("%d",&n);

    prime(n);
}
void prime(int n)
{
    int i,f=0;
    if (n==0||n==1)
    {
        printf("not prime");
    }
    for (i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            f=1;
            break;
        }
    }
        if (f==0)
        {
            printf("Number is prime");
        }
        else{
            printf("Number is not prime");
        }
}
