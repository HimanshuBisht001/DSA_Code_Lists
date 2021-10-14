#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void display(struct Node *head)
{
    if(head == NULL)
    {
        printf("List is empty:\n");
    }
    else{
        while(head != NULL)
        {
            printf("%d->",head->data);
            head = head->next;
        }
    }
}
struct Node *delete_at_beg(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
int main()
{
    struct Node *head,*sec,*third;
    head  = (struct Node*)malloc(sizeof(struct Node));
    sec = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 11;
    head->next = sec;
    sec->data = 22;
    sec->next = third;
    third->data = 33;
    third->next = NULL;
    printf("Linklist before deletetion:\n");
    display(head);
    head = delete_at_beg(head);
    printf("\nLinklist after deletation:\n");
    display(head);

}