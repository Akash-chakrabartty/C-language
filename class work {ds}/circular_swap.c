#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createcirculerlist()
{
    struct node *head = NULL, *temp = NULL, *newnode = NULL;
    int i;

    for (i = 1; i <= 5; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = i;
        newnode->next = head;

        if (head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
        }
        temp = newnode;
    }

    temp->next = head;
    return head;
}

void displaylist(struct node *head)
{
    struct node *temp = head;
    if (head != NULL)
    {
        do
        {
            printf("%d -> ", temp->data);
            temp = temp->next;

        } while (temp != head);
        printf("HEAD\n");
    }
}
void swapNodes(struct Node **head)
{
    if (*head == NULL || (*head)->next == NULL || (*head)->next->next == NULL)
    {
        printf("Swap not possible.\n");
        return;
    }

    struct Node *first = *head;
    struct Node *second = first->next;
    struct Node *third = second->next;
    struct Node *fourth = third->next;

    *head = third;
    int main()
    {
        struct Node *head = createCircularList();

        printf("Original Circular Linked List:\n");
        displayList(head);

        swapNodes(&head);

        printf("\nCircular Linked List after swapping 1st and 3rd nodes:\n");
        displayList(head);

        return 0;
    }