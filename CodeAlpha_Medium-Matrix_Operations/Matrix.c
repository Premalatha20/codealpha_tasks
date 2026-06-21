#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int i, j, k;
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter First Matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter Second Matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    /* Matrix Addition */

    printf("\nMatrix Addition:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }

        printf("\n");
    }

    /* Matrix Multiplication */

    printf("\nMatrix Multiplication:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            result[i][j] = 0;

            for(k = 0; k < c; k++)
            {
                result[i][j] =
                result[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    /* Transpose */

    printf("\nTranspose of First Matrix:\n");

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("%d ", a[j][i]);
        }

        printf("\n");
    }

    return 0;
}