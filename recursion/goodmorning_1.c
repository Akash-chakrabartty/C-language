#include <stdio.h>
void wish(int n)
{
    if (0 < n)
        printf("%d good morning\n", n);
    wish(n - 1);
    return;
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    wish(n);

    return 0;
}