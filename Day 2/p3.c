#include <stdio.h>
#include <stdlib.h>
void matrixMultiply(int **a, int **b, int r1, int r2, int c1, int c2, int **m)
{
    int sum=0;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < r2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            m[i][j] = sum;
            sum = 0;
        }
    }
}
void main()
{
    int r1, c1, r2, c2;
    printf("Enter the total number of ROWS in Matrix 1: ");
    scanf("%d", &r1);
    printf("Enter the total number of COLUMNS in Matrix 1: ");
    scanf("%d", &c1);
    int **a = malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++)
        a[i] = malloc(c1 * sizeof(int));

    printf("Enter the total number of ROWS in Matrix 2: ");
    scanf("%d", &r2);
    printf("Enter the total number of COLUMNS in Matrix 2: ");
    scanf("%d", &c2);
    int **b = malloc(r2 * sizeof(int *));
    for (int i = 0; i < r2; i++)
        b[i] = malloc(c2 * sizeof(int));

    if (c1 != r2)
        printf("Matrix Multiplication is not possible");
    else
    {
        printf("Enter the elements for matrix 1:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements for matrix 2:\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        int **m = malloc(r1 * sizeof(int *));
        for (int i = 0; i < r1; i++)
            m[i] = malloc(c2 * sizeof(int));
        matrixMultiply(a, b, r1, r2, c1, c2, m);
        printf("Matrix 1:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
                printf("%d\t", a[i][j]);
            printf("\n");
        }
        printf("Matrix 2:\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
                printf("%d\t", b[i][j]);
            printf("\n");
        }
        printf("The multiplied matrix is:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
                printf("%d\t", m[i][j]);
            printf("\n");
        }
    }
    for (int i = 0; i < r1; i++)
        free(a[i]);
    for (int i = 0; i < r2; i++)
        free(b[i]);
    free(a);
    free(b);
}