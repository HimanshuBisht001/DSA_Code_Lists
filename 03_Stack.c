#include<stdio.h>
#include<stdlib.h>
int push(int arr[], int top);
int pop(int arr[], int top);
void display(int arr[], int top);

int main()
{
    int arr[100];
    int top = -1;
    int num;
    while(1)
    {

        printf("\n");
        printf("Enter number 1 to push element in the stack:\n");
        printf("Enter number 2 to pop the element from the stack:\n");
        printf("Enter number 3 to display elements of the stack:\n");
        printf("Enter number 4 to exit the program:\n");
        scanf("%d",&num);

        if(num==1)
        {
            
            top = push(arr,top);
        }

        else if(num==2)
        {
           top = pop(arr, top);
        }

        else if(num==3)
        {
            display(arr,top);
        }
        else if(num==4)
        {
            printf("You exit the program:\n");
            exit(0);
        }
        else
        {
            printf("You have entered wrong number:\n");
            {
                exit(0);
            }
        }
        

        
    }
}


 int push(int arr[], int top)
 {
     int element;
     if(top==(100-1))
     {
         printf("There is no space for the new element:\n");
         printf("Condatation is overflow:\n");
         return top;
     }
     else
     {
         printf("Enter the element to be push in the stack:\n ");
         scanf("%d",&element);
         top = top+1;
         arr[top] = element;
         return top;
     }
 }    
 
 int pop(int arr[], int top)
 {
     if(top==-1)

     {
         printf("There is no element to get pop from the stack:\n");
         printf("Condatation is underflow");
         return top;
     }
     else
     {
         top=top-1;
         return top;
     }
 }
 void display(int arr[], int top)
 {
    int i;
     if(top==-1)
     {
         printf("Stack is empty:");
     }

     else
     {
         for(i=0;i<=top;i++)
         {
             printf("%d",arr[i]);
         }
    }

     
 }