#include<stdio.h>
int fact(int n);
int main()
{
    int n,z;
    printf("enter a number");
    scanf("%d",&n);

    z=fact(n);
    printf("factorial of number is %d",z);
}
int fact(int n)
{
    int f;
    if(n==0)
    {
        return 1;
    }
    else
    {
        f=n*fact(n-1);
        return f;
    }
}