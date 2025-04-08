#include <stdio.h>
int main()
{
    int n, i, j, t;
    printf("enter size of array");
    scanf("%d", &n);
    int arr[n];
    printf("all elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("Asending order of elements of array");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
