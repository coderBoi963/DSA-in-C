#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,small,large,posSmall=0, posLarge=0;
    printf("Enter the range: ");
    scanf("%d",&n);
    int *a=(int *)(calloc(n,sizeof(int)));
    printf("Enter the numbers:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
        if(i==0)
        {
            small=a[i];
            large=a[i];
        }
        else{
            if(a[i]<small)
            {
                small=a[i];
                posSmall=i;
            }
            if(a[i]>large)
            {
                large=a[i];
                posLarge=i;
            }
        }
    }
    printf("The smallest element is %d found at position %d\n",small,posSmall);
    printf("The largest element is %d found at position %d",large,posLarge);
    free(a);
}