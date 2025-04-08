#include<stdio.h>
int main()
{
    int sp,cp,n,p,l;
    printf("enter sp:\n");
    scanf("%d",&sp);
    printf("enter cp:\n");
    scanf("%d",&cp);
    
    n=sp-cp;

    if (n>0) {
    printf("there is a profit\n");
    p = sp - cp ;
    printf("profit=%d\n",p);
    int percent_profit = (p/cp)*100;
    printf("profit percentage=%d\n",percent_profit);
    }
    else {
    printf("there is a loss\n");
    l = sp - cp ;
    printf("loss=%d\n",l);
    int percent_loss = (l/cp)*100;
    printf("percentage loss=%d",percent_loss);
    }

}

