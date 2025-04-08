#include <stdio.h>
int main()
{
    int i, j, n, f;
    printf("Enter size of number: ");
    scanf("%d", &n);
    int a[n], freq[n];

    printf("Enter %d element of Array\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }

    for (i = 0; i < n; i++)
    {
        f = 1;
        for (j = i + 1; j < n; j++)
        {

            if (a[i] == a[j])
            {
                f++;
                freq[j] = 0;
            }
        }
    if (freq[i] != 0)
    {
        freq[i] = f;
    }
    }
    printf("\nFrequency of all elements:\n");
    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("Element %d occurs %d times\n", a[i], freq[i]);
        }
    }
}