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
//         printf("Element:%d\n", ptr->data);     ///arrow operator-  pointer_name -> variable_name
//         ptr = ptr->next;
//     }
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

//     fourth->data= 33;
//     fourth->next=NULL;

//     linkedlistTraversal(Head);

//     return 0;
// }

