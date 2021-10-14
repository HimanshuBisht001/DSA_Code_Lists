#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of the array you want to insert:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}