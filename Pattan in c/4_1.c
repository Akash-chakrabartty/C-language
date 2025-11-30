#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of Row  :");
    scanf("%d", &a);

    int b;
    printf("Enter the number of collum :");
    scanf("%d", &b);

    for (int i = 1; i <= a; i++)
    {
        for (int i = 1; i <= b; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}