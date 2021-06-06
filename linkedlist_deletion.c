///////********Deletion_of_starting element in linkedlist ********/////

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
//         printf("Element:%d\n",ptr->data);
//         ptr=ptr->next;
//     }

// }
// struct Node *deletionatFirst(struct Node *head)
// {
//     struct Node *p=head;
//     head=head->next;
//     free(p);
//     return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;

//     head=(struct Node*)malloc(sizeof(struct Node));
//     first=(struct Node*)malloc(sizeof(struct Node));
//     second=(struct Node*)malloc(sizeof(struct Node));
//     third=(struct Node*)malloc(sizeof(struct Node));

//     head->data=43;
//     head->next=first;

//     first->data=90;
//     first->next =second;

//     second ->data=23;
//     second ->next=third;

//     third->data=76;
//     third ->next=NULL;

//     printf("linkedlist before insertion\n");
//     linkedlistTraversal(head);
//     head=deletionatFirst(head);
//     printf("linkedlist after the insertion\n");
//     linkedlistTraversal(head);

//     return 0;
// }









/////////******deletion of inbetween element of the list*******//////

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
//         printf("Element:%d\n",ptr->data);
//         ptr=ptr->next;
//     }

// }
// struct Node *deletioninBetween(struct Node *head ,int index)
// {
//    struct Node *p=head;
//    struct Node *q=head->next;
//    int i=0;
//    while (i != index-1)
//    {
//        p=p->next;
//        q=q->next;
//        i++;
//    }
//    p->next=q->next;
//    free(q);
//    return head;

// }

// int main()
// {
//     struct Node *head;
//     struct Node *first;
//     struct Node *second;
//     struct Node *third;

//     head=(struct Node*)malloc(sizeof(struct Node));
//     first=(struct Node*)malloc(sizeof(struct Node));
//     second=(struct Node*)malloc(sizeof(struct Node));
//     third=(struct Node*)malloc(sizeof(struct Node));

//     head->data=43;
//     head->next=first;

//     first->data=90;
//     first->next =second;

//     second ->data=23;
//     second ->next=third;

//     third->data=76;
//     third ->next=NULL;

//     printf("linkedlist before insertion\n");
//     linkedlistTraversal(head);
//     printf("linkedlist after the insertion\n");
//     head=deletioninBetween(head,2);
//     linkedlistTraversal(head);

//     return 0;
// }

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
// struct Node *deletionatProvNode(struct Node *head,struct Node *provNode)
// {
//     struct Node *p=head;
//     while (p->next != provNode)
//     {
//         p=p->next;
//     }
//     p->next=provNode->next;
//     free(provNode);
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

//     head->data = 43;
//     head->next = first;

//     first->data = 90;
//     first->next = second;

//     second->data = 23;
//     second->next = third;

//     third->data = 76;
//     third->next = NULL;

//     printf("linkedlist before insertion\n");
//     linkedlistTraversal(head);
//     printf("linkedlist after the insertion\n");
//     head = deletionatProvNode(head,second);
//     linkedlistTraversal(head);

//     return 0;
// }






/////////****deletion at the end******////////////

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
struct Node *deletionatEnd(struct Node *head )
{
   struct Node *p=head;
   struct Node *q=head->next;
  
   while (q->next != NULL)
   {
       p=p->next;
       q=q->next;
       
   }
   p->next=q->next;
   free(q);
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

    head->data=43;
    head->next=first;

    first->data=90;
    first->next =second;

    second ->data=23;
    second ->next=third;

    third->data=76;
    third ->next=NULL;

    printf("linkedlist before insertion\n");
    linkedlistTraversal(head);
    printf("linkedlist after the insertion\n");
    head=deletionatEnd(head);
    linkedlistTraversal(head);

    
    return 0;
}