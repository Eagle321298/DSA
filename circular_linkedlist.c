// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void circularlistTraversal(struct Node *Head)
// {
//     struct Node *ptr = Head;
//     // Keep printing nodes till we reach the head node again
//     do
//     {
//         printf("Element is %d\n", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != Head);
// }
// struct Node *insertionatFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     struct Node *p = head->next;

//     do
//     {
//         p = p->next;

//     } while (p->next != head);
//     ///at this point p points to last node of circular linke list

//     p->next = ptr;
//     ptr->next = head;
//     head = ptr;
//     return head;
// }

// int main()
// {
//     struct Node *Head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     ///allocate memory for nodes of linkedlist in heap
//     Head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     Head->data = 8;
//     Head->next = first;

//     first->data = 34;
//     first->next = second;

//     second->data = 98;
//     second->next = third;

//     third->data = 67;
//     third->next = fourth;

//     fourth->data = 33;
//     fourth->next = Head;
//     printf("Circular linkedlist before the insertion\n");
//     circularlistTraversal(Head);
//     Head = insertionatFirst(Head, 80);
//     Head = insertionatFirst(Head, 90);
//     Head = insertionatFirst(Head, 100);
//     printf("Circular linkedlist after the insertion\n");
//     circularlistTraversal(Head);
//     return 0;
// }












//////////********inbetween circular linked insertion*******///////////
// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void circularlistTraversal(struct Node *Head)
// {
//     struct Node *ptr = Head;
//     // Keep printing nodes till we reach the head node again
//     do
//     {
//         printf("Element is %d\n", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != Head);
// }
// struct Node *insertioninBetween(struct Node *Head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = Head;
//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;

//     return Head;
// }

// int main()
// {
//     struct Node *Head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     ///allocate memory for nodes of linkedlist in heap
//     Head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     Head->data = 8;
//     Head->next = first;

//     first->data = 34;
//     first->next = second;

//     second->data = 98;
//     second->next = third;

//     third->data = 67;
//     third->next = fourth;

//     fourth->data = 33;
//     fourth->next = Head;
//     printf("Circular linkedlist before the insertion\n");
//     circularlistTraversal(Head);
//     Head = insertioninBetween(Head, 80, 2);
//     Head = insertioninBetween(Head, 90, 3);

//     printf("Circular linkedlist after the insertion\n");
//     circularlistTraversal(Head);
//     return 0;
// }















/////////*****insertion at the End*************/////
// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void circularlistTraversal(struct Node *Head)
// {
//     struct Node *ptr = Head;
//     // Keep printing nodes till we reach the head node again
//     do
//     {
//         printf("Element is %d\n", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != Head);
// }
// struct Node *insertionatEnd(struct Node *Head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = Head->next;
//     ptr->data=data;

//     do
//     {
//         p = p->next;

//     } while (p->next != Head);
//     ///at this point p points to last node of circular linke list

//     p->next = ptr;
//     ptr->next = Head;

//     return Head;
// }

// int main()
// {
//     struct Node *Head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     ///allocate memory for nodes of linkedlist in heap
//     Head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     Head->data = 8;
//     Head->next = first;

//     first->data = 34;
//     first->next = second;

//     second->data = 98;
//     second->next = third;

//     third->data = 67;
//     third->next = fourth;

//     fourth->data = 33;
//     fourth->next = Head;
//     printf("Circular linkedlist before the insertion\n");
//     circularlistTraversal(Head);
//     Head = insertionatEnd(Head, 80);
//     Head = insertionatEnd(Head, 90);

//     printf("Circular linkedlist after the insertion\n");
//     circularlistTraversal(Head);
//     return 0;
// }








/////////////insertion after provided Node******/////////
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void circularlistTraversal(struct Node *Head)
{
    struct Node *ptr = Head;
    // Keep printing nodes till we reach the head node again
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != Head);
}
struct Node *insertionatNode(struct Node *Head, int data, struct Node *prevNode)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;

    return Head;
}

int main()
{
    struct Node *Head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    ///allocate memory for nodes of linkedlist in heap
    Head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    Head->data = 8;
    Head->next = first;

    first->data = 34;
    first->next = second;

    second->data = 98;
    second->next = third;

    third->data = 67;
    third->next = fourth;

    fourth->data = 33;
    fourth->next = Head;
    printf("Circular linkedlist before the insertion\n");
    circularlistTraversal(Head);
    Head = insertionatNode(Head, 80, second);
    Head = insertionatNode(Head, 90, fourth);

    printf("Circular linkedlist after the insertion\n");
    circularlistTraversal(Head);
    return 0;
}