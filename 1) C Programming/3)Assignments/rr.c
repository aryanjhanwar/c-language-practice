#include <stdio.h>
int main ()
{
     int a = 6; int b =0 ;
    {
        printf("Table of %d is\n", a);
    }
   
    for(int i=1 ; i<=10 ; i++)
    {
        printf("%d X %d = %d \n", a , b+=1 , a*i );
     
    }
}