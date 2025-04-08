#include<stdio.h>
void main()
{
    int x,i,z=1,s=0;

    printf("enter number:");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    if (i%2==0) 
    {
        z=z*i;
       
    }
    else
    {
        s=s+i;
        
    }
     printf("%d\n",z);
    printf("%d\n",s);
   
    
}