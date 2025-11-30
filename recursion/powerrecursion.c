#include <stdio.h>
int function(int x, int y)
{
    if (y == 0)
        return 1;
    return x * function(x, y - 1);
}
int main()
{
    int a, b;
    printf("enter the base :");
    scanf("%d", &a);

    printf("enter the power :");
    scanf("%d", &b);

    int power = function(a, b);
    printf("%d", power);

    return 0;
}