#include<stdio.h>
#include<stdlib.h>
void main()
{
    int r,c;
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    
    int **a=malloc(r*sizeof(int *));
    for(int i=0;i<r;i++)
        a[i]=malloc(c*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("The original array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("The array after transposing:\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
            printf("%d\t",a[j][i]);
        printf("\n");
    }
    for(int i=0;i<r;i++)
        free(a[i]);
    free(a);
}