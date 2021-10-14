#include<stdio.h>
#include<stdlib.h>
# define MAX 20
void insert();
void delete();
void display();
int arr[MAX];
int front=-1;
int rear=-1;
int main()
{
   int choice;
   while(1)
   {
       printf("\n----------Menu-------------\n");
       printf("Enter number 1 to insert an element:\n");
       printf("Enter number 2 to delete an element :\n");
       printf("Enter number 3 to display the elements:\n");
       printf("Enter number 4 to exit:\n");
       scanf("%d",&choice);
   
   switch(choice)
        {
                case 1:
                        insert();
                        break;
                case 2:
                        delete();
                        break;
                case 3:
                        display();
                        break;
                case 4:
                       exit(0);
  
        }
   }

}
void insert()
{
    int element;
    if(front==0 && rear==MAX-1||front==rear+1)
    {
            printf("Queue is full:\n");
            printf("Condataion is over flow:\n");
    }
    
    else
    {
            if(front==-1)
            {
                front=0;
                rear=0;
            }
            else if (rear==MAX-1)
            {
                rear=0;
            }
            else
            {
                rear=rear+1;
            }

            printf("Enter the element to be inserted:\n");
            scanf("%d",&element);
            arr[rear]=element;

            
    }

}
void delete()
{
        if(front==-1)
        {
                printf("There is element to delete from the Queue:\n");
                printf("Condatation is underflow:\'n");
        }

        printf("%d is the element deleted front the Queue.",arr[front]);
        printf("\n");

        if(front==MAX-1)
        {
                front=0;
        }
        else if(front==rear)
        {
                front=1;
                rear=-1;
        }
        else
        {
                front=front+1;
        }
}

void display()
{
   if(front==-1)
   {
           printf("Queue is empty:\n");
   }

   else if(front<=rear)
   {
           for(int i=front;i<=rear;i++)
           {
                   printf("%d ",arr[i]);
           }
        
   }
   else
   {
           for(int i=front;i<=MAX-1;i++)
           {
                   printf("%d ",arr[i]);
           }
           for(int i=0;i<=rear;i++)
           {
                   printf("%d ",arr[i]);
           }
   }
}