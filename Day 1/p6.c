#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,sum=0;
    float avg=0.0;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    int *a=(int *)(calloc(n,sizeof(int)));
    for (int i=0;i<n;i++)
    {
        scanf("%d",(a+i));
        sum=sum+*(a+i);
    }
    printf("The sum is: %d\n",sum);
    avg=(float)(sum)/n;
    printf("The average is: %f",avg);
    free(a);
}
