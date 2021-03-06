#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
void doublelikedTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *reverse(struct Node *head)
{
    struct Node *p = head;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    
    while (p->next != NULL)
    {
        p = p->next;
    }
    p = p->prev;
    while (p != NULL)
    {
        p = p->prev;
        printf("Element:%d", ptr->data);
    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *n2;
    struct Node *n3;
    struct Node *n4;
    struct Node *n5;

    head = (struct Node *)malloc(sizeof(struct Node));
    head = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));
    n4 = (struct Node *)malloc(sizeof(struct Node));
    n4 = (struct Node *)malloc(sizeof(struct Node));
    n5 = (struct Node *)malloc(sizeof(struct Node));
    n5 = (struct Node *)malloc(sizeof(struct Node));

    head->prev = NULL;
    head->data = 87;
    head->next = n2;

    n2->prev = head;
    n2->data = 21;
    n2->next = n3;

    n3->prev = n2;
    n3->data = 88;
    n3->next = n4;

    n4->prev = n3;
    n4->data = 12;
    n4->next = n5;

    n5->prev = n4;
    n5->data = 70;
    n5->next = NULL;

    doublelikedTraversal(head);
    head=reverse(head);
    doublelikedTraversal(head);
    return 0;
}