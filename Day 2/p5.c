#include <stdio.h>
#include <stdlib.h>
int sum(int **a, int r, int c)
{
    int s = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            s = s + a[i][j];
        }
    }
    return s;
}
int TriCheck(int **a, int r, int c, int p)
{
    int flag = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (p==1 && i>j && a[i][j]!= 0)
            {
                flag = -1;
                break;
            }
            else if (p==0 && i<j && a[i][j]!= 0)
            {
                flag = -1;
                break;
            }
        }
        if (flag == -1)
            break;
    }
    return flag;
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
    printf("Enter the elements of the array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    if (TriCheck(a, r, c, 1) == 1)
    {
        printf("Upper Triangular Matrix\n");
        printf("The sum of elements is: %d", sum(a, r, c));
    }
    else
        printf("Not an Upper Triangular matrix");
    for (int i = 0; i < r; i++)
        free(a[i]);
    free(a);
}