#include <stdio.h>
int main()
{
    // int n;
    // printf("Enter the value :");
    // scanf("%d", &n);
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            // int a = n / 2 + 1;
            if (i == 1 || j == 1 || j == 6 || i == 4)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }

    return 0;
}
