#include <stdio.h>
#include <stdlib.h>
int sum(int **a, int n, int cons, int p)
{
    int s = 0;
    if (p == 1)
    {
        for (int i = 0; i < n; i++)
            s = s + a[cons][i];
    }
    else
    {
        for (int i = 0; i < n; i++)
            s = s + a[i][cons];
    }
    return s;
}
void main()
{
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int **a = malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
        a[i] = malloc(c * sizeof(int));
    printf("Enter the values of the array:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    printf("The original matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    for (int i = 0; i < r; i++)
        printf("The sum of row %d = %d\n", i, sum(a, c, i, 1));
    for (int i = 0; i < c; i++)
        printf("The sum of column %d = %d\n", i, sum(a, r, i, 0));

    for (int i = 0; i < r; i++)
        free(a[i]);
    free(a);
}