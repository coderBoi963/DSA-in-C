#include<stdio.h>
#include<stdlib.h>
int sort(int *a, int n, int p)
{
    int temp;
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if (p==1)
        return (a[n-1]);
    else
        return (a[n-2]);
}
void main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    int *a=(int *)(calloc(n,sizeof(int)));
    printf("Enter the numbers:\n");
    for (int i=0;i<n;i++)
        scanf("%d",(a+i));
    int large=sort(a,n,1);
    int large2=sort(a,n,0);
    printf("The largest is %d\n",large);
    printf("The second largest is %d",large2);
    free(a);
}
    
    
    