#include<stdio.h>
void insert(int arr[], int n);
int main()
{
    int n,i;
    
    printf("Enter the numbers of the elemets of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemets of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Elements of the array before insertaion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    insert(arr,n);
    
    
}
void insert(int arr[], int n)
{
    int i,element,position;
    
    printf("\nEnter the element to inserted:\n");
    scanf("%d",&element);
    
    printf("Enter the position in which element to be inserted:\n");
    scanf("%d",&position);
     n=n+1;
     
     if(position<=n)
     {
	 
    	 for(i=n-1;i>=position-1;i--)
     	{
       	  arr[i+1]=arr[i];
     	}
     
     	arr[position-1]=element;
     
     	printf("Elements of the array after insertaion are:\n");
     
     	for(i=0;i<n;i++)
     	{
        	 printf("%d ",arr[i]);
     	}
    }
    else if(position>n)
    {
    	printf("Posotion not found :\n");
	}
    
}