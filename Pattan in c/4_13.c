#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n; j++)
        {
            int b = 64 + a;
            char patan = (char)b;
            printf(" %c ", patan);
            a = a + 1;
        }
        printf("\n");
    }

    return 0;
}