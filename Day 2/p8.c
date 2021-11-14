#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int **a = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        a[i] = malloc(n * sizeof(int));
    printf("Enter the values of the array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("The original matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        int temp = a[i][i];
        a[i][i] = a[i][n - i - 1];
        a[i][n - i - 1] = temp;
    }
    printf("The matrix after interchanging the diagonals:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
        free(a[i]);
    free(a);
}