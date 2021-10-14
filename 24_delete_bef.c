#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void display(struct Node *ptr)
{
    if(ptr==NULL)
    {
        printf("No element is there:\n");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr = ptr->next;
        }
    }
}
struct Node* delete_before(struct Node *head, int val)
{
    struct Node *ptr,*temp;
    ptr = head;
    if(ptr->next->data == val)
    {
        temp = head;
        head = head->next;
    }
    else
    {
        while(ptr->next->next->data!=val)
        {
            ptr = ptr->next;
        }
        temp = ptr->next;
        ptr->next = ptr->next->next;
    }
    free(temp);
    return head;
}
int main()
{
    struct Node *head,*sec,*third,*fourth;
    head = (struct Node*)malloc(sizeof(struct Node));
    sec = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    head->data = 11;
    head->next = sec;
    sec->data = 12;
    sec->next = third;
    third->data = 13;
    third->next = fourth;
    fourth->data = 14;
    fourth->next = NULL;
    printf("Elements in the linked list before deletaion:\n");
    display(head);
    delete_before(head,13);
    printf("\nElements after the deletaion:\n");
    display(head);
    
}