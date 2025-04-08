#include <stdio.h>
int main()
{
    int n, i, j, s;
    printf("enter size of array");
    scanf("%d", &n);
    int a[n];
    printf("all elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search in this array");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("location of element is %d",++i);
            break;
        }
    }
        if(i==n)
        {
            printf("element not found");
        }
    

}