// C program to store 10 elements and print their sum:
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,*ptr,sum=0,i;
    printf("Enter the numnber of blocks:\n");
    scanf("%d",&num);
    ptr = (int*)calloc(num,sizeof(int));
    printf("Enter the 10 integer type elements:\n");
    for(i=0;i<num;i++)// Using to store the values:
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<num;i++) // using to display the values:
    {
        printf("%d ",*(ptr+i));
    }

    

}