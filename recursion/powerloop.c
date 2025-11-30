#include <stdio.h>
int function(int x, int y)
{
    int c = 1;
    for (int i = 1; i <= y; i++)
    {
        c = c * x;
    }
    return c;
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