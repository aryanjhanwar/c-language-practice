#include <stdio.h>
void main()
{
    int i, j, n, b, k, l;
    float no, f, h;
    int arr1[20], arr2[20];

    printf("Enter A decimal Number");
    scanf("%f", &no);


    //seperate integer and fractional part
    i = (int)no;
    f = (float)no - i;

    //integer part conversion
    int a[20];
    for (k = 0; k <= 8; k++)
    {
        l = i % 2;
        i = i / 2;
        a[k] = l;
    }

    for (k = 8; k >= 0; k--)
    {
        printf("%d", a[k]);
    }


    //fractional part conversion
    if (f > 0)
    {
        printf(".");
        for (j = 0; j < 10; j++)
        {
            f = f * 2;
            n = (int)f;
            printf("%d", n);
            f = f - n;
            if (f == 0)
            {
                break;
            }
        }
    }
}