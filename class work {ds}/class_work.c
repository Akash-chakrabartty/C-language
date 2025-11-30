// double linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

} *head = 0, temp;

// create DILL
struct node *createdll()
{
    printf("enter the data into dll :\n");
    struct node *newnode = (struct node *)malloc(struct node);
    scanf("%d", &newnode);
    newnode->next = 0;
    newnode->prev = 0;
    if (head == 0)
    {
        head = temp = newnode;
    }
    else
    {
        temp = head;
        while (temp != 0)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        newnode->next = 0;
        temp->next = newnode;
        temp = newnode;
    }
}
