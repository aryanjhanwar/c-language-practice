#include<stdio.h>
int main()
{
    int n,i,max,min;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("all elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    max=arr[0];
    min=arr[0];

    for(i=0;i<n;i++)
    
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("maximum\t%d",max);
    printf("minimum\t%d",min);

}