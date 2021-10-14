#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void display(struct Node *head)
{
    if(head==NULL)
    {
        printf("List is empty:");
    }
    else
    {
        while(head!=NULL)
        {
            printf("%d->",head->data);
            head = head->next;
        }
    }
}
struct Node* insert_at_beg(struct Node *head, int data)
{
    struct Node *ptr  = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;

}
struct Node* insert_bef(struct Node *head, int data, int val)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p;
    p = head;
    ptr->data = data;
     if(head->data==val)
    {
        ptr->next = head;
        head = ptr;
        return head;
    }
    while(p->next->data != val)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node* insert_at_end(struct Node *head, int val)
{
    struct Node *ptr,*p;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    p = head;
    ptr->data=val;
    if(head==NULL)
    {
        ptr->next=head;
        head=ptr;
        return head;
    }   
    else
    {
        while(p->next!=NULL)
        {
            p = p->next;
        }
        p->next = ptr;
        ptr->next = NULL;
        return head;
    } 
}
struct Node *insert_after(struct Node *head, int val, int element)
{
    struct Node *p,*ptr = (struct Node*)malloc(sizeof(struct Node));
    p = head;
    ptr->data = element;
    if(head==NULL)
    {
        ptr->next = head;
        head = ptr;
        return head;
    }
    else{
        while(p->data!=val)
        {
            p = p->next;
        }
      ptr->next = p->next;
        p->next = ptr;
        return head;

    }
    
    
}
int main()
{
    int choice,ch;
    struct Node *head,*second,*third;
    head = NULL;
   /* head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 11;
    head->next = second;
    second->data = 12;
    second->next = third;
    third->data = 13;
    third->next = NULL;*/
    do
    {
        printf("Enter 1 to insert at begining:\n");
        printf("Enter 2 to insert before:\n");
        printf("Enter 3 to insert after:\n");
        printf("Enter 4 to insert at end:\n");
        printf("Enter 5 to display the list:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
              head = insert_at_beg(head,40);
              break;
            case 2:
              head = insert_bef(head,40,10);
              break;
            case 3:
              head = insert_after(head,12,20);
              break;
            case 4:
              head = insert_at_end(head,11);
              break;
            case 5:
              display(head);
              break; 
        }
        printf("\nDo yo want to continue y or n:\n");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y'|| ch=='Y');
}
