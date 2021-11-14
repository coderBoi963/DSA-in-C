#include <stdio.h>
#include <stdlib.h>
void main()
{
    int r, c, z1 = 0, z2 = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int **a = malloc(r * sizeof(int *));
    int **b = malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
    {
        a[i] = malloc(c * sizeof(int));
        b[i] = malloc(c * sizeof(int));
    }

    printf("Enter the values of matrix 1:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
                z1 = z1 + 1;
        }
    }
    printf("Enter the values of matrix 2:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
            if (b[i][j] == 0)
                z2 = z2 + 1;
        }
    }
    if ((z1 >= ((r * c) / 2)) && (z2 >= ((r * c) / 2)))
    {
        printf("Matrix 1:\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                printf("%d\t", a[i][j]);
            printf("\n");
        }
        printf("Matrix 2:\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                printf("%d\t", b[i][j]);
            printf("\n");
        }
        printf("Addition:\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                printf("%d\t", a[i][j] + b[i][j]);
            printf("\n");
        }
    }
    else
    {
        printf("Failed to detect a sparse matrix");
    }

    for (int i = 0; i < r; i++)
    {
        free(a[i]);
        free(b[i]);
    }
    free(a);
    free(b);
}