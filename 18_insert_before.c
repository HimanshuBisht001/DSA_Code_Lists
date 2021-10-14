#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
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

void print(struct Node *head)
{
    while(head != NULL)
    {
        printf("%d->",head->data);
        head = head->next;
    }
}

int main()
{
    struct Node *head,*second,*third;
    //head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
   // second = (struct Node*)malloc(sizeof(struct Node));
   // third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;
   // second->data = 20;
    //second->next = third;
    //third->data = 30;
    //third->next = NULL;
    //linklist = 10->20->30
    head = insert_bef(head,40,10);
    print(head);
}