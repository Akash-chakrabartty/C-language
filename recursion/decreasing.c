#include <stdio.h>
void decreasing(int n)
{
    if (0 == n)
        return;
    printf("%d\n", n);
    decreasing(n - 1);
    return;
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    decreasing(n);

    return 0;
}