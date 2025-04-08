#include<stdio.h>
void main()
{
    int n1,n2,n3,t,i;
    n1=0;
    n2=1;

    printf("emter the number of terms");
    scanf("%d",&t);

    printf("%d\t%d\t",n1,n2);

    for(i=3;i<=t;i++)
    {
        n3=n1+n2;
        printf("%d\t",n3);
        n1=n2;
        n2=n3;
    }
}