#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
    printf("%d->",ptr->data);
    ptr = ptr->next;
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



int main()
{
    struct Node *head,*second,*third;
    head  = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data=20;
    head->next=second;
    second->data=30;
    second->next=third;
    third->data=50;
    third->next=NULL;
    //linklist = 20->30
   // head = insert_at_beg(head,40);//40->20->30
    traversal(head);
}