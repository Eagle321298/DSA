// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element:%d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct Node *insertionatfirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
// }
// int main()
// {
//     struct Node *head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 35;
//     head->next = first;

//     first->data = 56;
//     first->next = second;

//     second->data = 34;
//     second->next = third;

//     third->data = 22;
//     third->next = NULL;

//     linkedlistTraversal(head);
//     printf("\n");
//     head = insertionatfirst(head, 97);
//     linkedlistTraversal(head);
//     return 0;
// }












// ////insertion inbetween////////
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element:%d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct Node *insertionatIndex(struct Node *head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;

//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }

//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 35;
//     head->next = first;

//     first->data = 56;
//     first->next = second;

//     second->data = 34;
//     second->next = third;

//     third->data = 22;
//     third->next = NULL;

//     linkedlistTraversal(head);
//     printf("\n");
//     head = insertionatIndex(head, 97, 2);
//     linkedlistTraversal(head);
//     return 0;
// }









//////////insertion at the end//////////////

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element:%d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct Node *linkedlistatEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }

//     ptr->data = data;
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     first = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 34;
//     head->next = first;

//     first->data = 99;
//     first->next = second;

//     second->data = 87;
//     second->next = third;

//     third->data = 22;
//     third->next = NULL;

//     printf("linked list before insertiona\n");
//     linkedlistTraversal(head);
//     head=linkedlistatEnd(head,10);
//     printf("linked list after insertion\n");
//     linkedlistTraversal(head);

//     return 0;
// }










///////insertion at given node////////
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
struct Node *atprovidedNode(struct Node *head, struct Node *prevNode, int data)
{
    
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=12;
    head->next=first;

    first->data=76;
    first->next=second;

    second->data=99;
    second->next=third;

    third->data=30;
    third->next=NULL;

    printf("linked list before insertion\n");
    linkedlistTraversal(head);
    head=atprovidedNode(head,second,45);
    printf("linked list after insertion\n");
    linkedlistTraversal(head);

    return 0;
}