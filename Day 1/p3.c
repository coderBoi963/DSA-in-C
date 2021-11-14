#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,pos;
    printf("Enter the range: ");
    scanf("%d",&n);
    int *a=(int *)(calloc(n,sizeof(int)));
    printf("Enter the numbers:\n");
    for (int i=0;i<n;i++)
        scanf("%d",(a+i));
    printf("Enter the position from where you want to remove the element: ");
    scanf("%d",&pos);
    if(pos>=n)
        printf("Out of range");
    else{
        printf("After deleting:\n");
        for (int i=0;i<n;i++)
        {
            if (i!=pos)
                printf("%d ",*(a+i));
        }
        free(a);
    }
}
