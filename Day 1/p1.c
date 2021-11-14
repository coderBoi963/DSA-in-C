#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    int *a=(int *)(calloc(n,sizeof(int)));
    for (int i=0;i<n;i++)
        scanf("%d",(a+i));
    printf("The numbers entered are:\n");
    for (int i=0;i<n;i++)
        printf("%d ",*(a+i));
    free(a);
}
