#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,del,pos=-1;
    printf("Enter the range: ");
    scanf("%d",&n);
    int *a=(int *)(calloc(n,sizeof(int)));
    printf("Enter the array in sorted manner(Ascending Order):\n");
    for (int i=0;i<n;i++)
        scanf("%d",(a+i));
    printf("Enter the number to be deleted: ");
    scanf("%d",&del);
    for(int i=0;i<n;i++)
    {
        if(*(a+i)==del)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
        printf("Number not found");
    else{
        printf("The array afetr deleting:\n");
        for(int i=0;i<n;i++)
        {
            if(i!=pos)
                printf("%d ",*(a+i));
        }
    }
    free(a);
}
