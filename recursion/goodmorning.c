#include <stdio.h>
void wishing(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d good morning \n", i);
    }
    return;
}

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    wishing(n);

    return 0;
}