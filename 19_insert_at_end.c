#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void display(struct Node *head)
{
    if(head==NULL)
    {
        printf("List is empty:\n");
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
int main()
{
    struct Node *head;
    head = NULL;
    //display(head);
    head = insert_at_end(head,11);
    display(head);
}