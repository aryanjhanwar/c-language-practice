#include<stdio.h>
void main()
{
    int no=100,i,j,f=0;

    while(no>=2)
    {
        f=0;
    for(i=2;i<=no/2;i++)
    {
        if (no%i==0)
        {
            f=1;
            break;
        }
    }
    if (f==0)
    {
        printf("%d\n",no);
    }
    --no;
    }
    
}
