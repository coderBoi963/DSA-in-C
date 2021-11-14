#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,ins,pos;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    int *a=(int *)(calloc(n+1,sizeof(int)));
    for (int i=0;i<n;i++)
        scanf("%d",(a+i));
    printf("Enter the number to be added: ");
    scanf("%d",&ins);
    printf("Enter the position where the number is to be added: ");
    scanf("%d",&pos);
    if(pos>=n)
        printf("Out of range");
    else{
        for (int i=n-1;i>=pos;i--)
            *(a+(i+1))=*(a+i);
        *(a+pos)=ins;
        printf("After inserting the number in the specified position:\n");
        for (int i=0;i<n+1;i++)
            printf("%d ",*(a+i));
        free(a);
    }
}
