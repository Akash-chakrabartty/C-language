#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b;
    printf("Enter a number :");
    scanf("%d", &a);
    printf("Enter another number :");
    scanf("%d", &b);

    int sum = add(a, b);
    printf("value  is :%d", sum);
    return 0;
}