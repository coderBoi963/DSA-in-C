#include<stdio.h>
#include<stdlib.h>
void shiftArray(int *a, int n, int pos)
{
    for(int i=n-2;i>=pos;i--)
        *(a+(i+1))=*(a+i);

}
void insert(int *a, int n, int e)
{
    for(int i=0;i<n;i++)
    {
        if (e<a[i])
        {
            shiftArray(a,n,i);
            a[i]=e;
            break;
        }
    }
    if(e>a[n-2])
        a[n-1]=e;
}
void main()
{
    int n,e;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the array in sorted manner(Ascending Order):\n");
    int *a=(int *)(calloc(n+1,sizeof(int)));
    for (int i=0;i<n;i++)
        scanf("%d",(a+i));
    printf("Enter the element which you want to insert: ");
    scanf("%d",&e);
    insert(a,n+1,e);
    printf("Array after inserting:\n");
    for(int i=0;i<n+1;i++)
        printf("%d ",*(a+i));
    free(a);
}