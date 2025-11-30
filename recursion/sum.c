#include <stdio.h>
void sum(int x, int y)
{
    if (x == 0)
    {
        printf("the sum value is :%d\n", y);
        return;
    }
    sum(x - 1, x + y);
    return;
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    sum(n, 0);

    return 0;
}