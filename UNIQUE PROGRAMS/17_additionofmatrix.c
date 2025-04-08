#include <stdio.h>

int main() {
    int b[3][3], a[3][3], sum[3][3];
    int i, j;

    printf("Enter elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    printf("Enter elements of the second 3x3 matrix:\n");
    for (i = 0; i<3; i++) {
        for (j = 0; j<3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j<0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addtiion of both 3x3 matrices");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
    }
}
