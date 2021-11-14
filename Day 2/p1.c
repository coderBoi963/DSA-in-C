#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int **a=malloc(n*sizeof(int *));
    for (int i=0;i<n;i++)
        a[i]=malloc(n*sizeof(int));
    
    int **b=malloc(n*sizeof(int *));
    for (int i=0;i<n;i++)
        b[i]=malloc(n*sizeof(int));
   


    printf("Enter the elements of matrix A:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    printf("Enter the elements of matrix B:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    }


    printf("Matrix A:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("Matrix B:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }
    printf("Matrix A+B:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d\t",a[i][j]+b[i][j]);
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        free(a[i]);
        free(b[i]);   
    }
    free(a);
    free(b);
}