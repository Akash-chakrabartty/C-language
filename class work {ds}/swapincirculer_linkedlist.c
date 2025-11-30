#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create a circular linked list with 5 nodes
struct Node *createCircularList()
{
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int i;

    // Create 5 nodes
    for (i = 1; i <= 5; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = head;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
        }
        temp = newNode;
    }
    // Complete the circle
    temp->next = head;

    return head;
}

// Function to display the circular linked list
void displayList(struct Node *head)
{
    struct Node *temp = head;
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

// Function to swap the 1st and 3rd nodes
void swapNodes(struct Node **head)
{
    if (*head == NULL || (*head)->next == NULL || (*head)->next->next == NULL)
    {
        printf("Swap not possible.\n");
        return;
    }

    struct Node *first = *head;        // First node
    struct Node *second = first->next; // Second node
    struct Node *third = second->next; // Third node
    struct Node *fourth = third->next; // Fourth node

    // Adjust pointers to swap the first and third nodes
    *head = third;        // Make third node as the new head
    second->next = first; // Second points to first
    first->next = fourth; // First points to fourth
    third->next = second; // Third points to second
}

// Main function
int main()
{
    struct Node *head = createCircularList();

    // Display the original list
    printf("Original Circular Linked List:\n");
    displayList(head);

    // Swap the 1st node with the 3rd node
    swapNodes(&head);

    // Display the list after swapping
    printf("\nCircular Linked List after swapping 1st and 3rd nodes:\n");
    displayList(head);

    return 0;
}