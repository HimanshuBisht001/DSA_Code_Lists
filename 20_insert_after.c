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
    struct Node *head,*second,*third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 11;
    head->next = second;
    second->data = 12;
    second->next = third;
    third->data = 13;
    third->next = NULL;
    printf("Linklist before insertation:\n");
    display(head);
    head = insert_after(head,12,20);
    printf("\nLinklist after insertation:\n");
    display(head);



}
