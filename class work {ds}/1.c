#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr = arr; // Pointer to the array

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    // Display the numbers
    printf("The numbers are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
