// C program to delete an element from the array:
#include<stdio.h>
void del(int arr[], int n);
int main()
{
	int n,i;
	printf("Enter the number of the elements of the array:\n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Elements of the array before deletion are:\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d ",arr[i]);
	 }
	 
	 del(arr,n);
}

void del(int arr[], int n)
{
	int i,position;
	printf("\nEnter the position in which element to be deleted:\n");
	scanf("%d",&position);
	
	if(position>n+1)
	{
		printf("Deletation not possible:\n");
	}
	
	else
	{
		for(i=position-1;i<n-1;i++)
		{
			arr[i] = arr[i+1];
		}
		
		
		
		printf("Elements of the array after deletation are:\n");
		for(i=0;i<n-1;i++)
		{
			printf("%d ",arr[i]);
		}
	}
	
	
}