#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*ptr,*p;
    printf("Enter the size:\n");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    p = ptr;

    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }

    for(int i=1;i<=n;i++)
    {
        printf("\n%d",*p);
        p++;
    }
}