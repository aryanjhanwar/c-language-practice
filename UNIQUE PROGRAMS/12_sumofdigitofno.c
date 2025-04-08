#include<stdio.h>
int main()
{
    int sum=0,digit,no;
    printf("enter a number");
    scanf("%d",&no);

    do{
        digit=no%10;
        sum=sum+digit;
        no=no/10;
    }while(no>0);
    printf("sum of digit is %d",sum);
}