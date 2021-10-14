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
        printf("Linklist is empty:");
    }
    else{
        while(head!=NULL)
        {
            printf("%d->",head->data);
            head = head->next;
        }
    }
}
struct Node* delete_at_end(struct Node *head)
{
    struct Node  *ptr,*temp;
    ptr = head;
    if(head->next==NULL)
    {
        temp = head;
        head = NULL;
        free(temp);
        exit(0);
    }
    else{
        while(ptr->next->next!=NULL)
        {
            ptr = ptr->next;
        }
        temp = ptr->next;
        ptr->next = NULL;
        free(temp);
    }

    return head;
    
}
int main()
{
    struct Node *head,*sec,*third;
    head = (struct Node*)malloc(sizeof(struct Node));
    sec = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 11;
    head->next = sec;
     sec->data = 12;
     sec->next = third;
     third->data = 13;
     third->next = NULL;
    printf("Linklist before the deletation:\n");
    display(head);
    delete_at_end(head);
    printf("Linklist after the deletation\n");
    display(head);
}