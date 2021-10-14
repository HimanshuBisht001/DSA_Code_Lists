#include<stdio.h>
#include<stdlib.h>
void insert(void);
void del(void);
int front = -1;
int rear = -1;
void display(void);
int arr[100];
int main()
{
    int num;
    while(1)
    {
        printf("\n");
        printf("Enter number 1 to insert the element in the Queue:\n");
        printf("Enter number 2 to delete the element from the Queue:\n");
        printf("Enter number 3 to display elements of the Queue:\n");
        printf("Enter number 4 to exit the program:\n");
        scanf("%d",&num);

        if(num==1)
        {
            insert();
        }
        else if(num==2)
        {
            del();
        }
        else if(num==3)
        {
            display();
        }
        else if(num==4)
        {
            printf("Thankyou:\n You have exit the program:\n");
            exit(0);
        }
    }


}
void insert(void)
{
    int element;
    if(rear==99)
    {
       printf("There is no empty space in the stack:\n Condatation is overflow:\n");
    }
    else
    {
        if(front==-1)
        front=0;
        printf("Enter the element to be inserted:\n");
        scanf("%d",&element);
        rear=rear+1;
        arr[rear] = element;
        
        
    }
}
void del(void)
{
    int temp;
    if(front==-1)
    {
        printf("Queue is empty:\n Condatation is under flow:\n");
    }

    temp=arr[front];//deleted element:

    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=front+1;
    }
    printf("Deleted element from the Queue is %d",temp);

    
}
void display(void)
{
   if(front==-1)
   {
       printf("There is no element to display:\n Queue is empty:\n");
   }
   else
   {
       for(int i=front;i<=rear;i++)
       {
           printf("%d ",arr[i]);
       }
   }
}