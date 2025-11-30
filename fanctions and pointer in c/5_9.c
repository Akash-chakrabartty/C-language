#include <stdio.h>
int squere(int x)
{
    return x * x;
}
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);

    int value = squere(a);
    printf("the squere value is :%d", value);

    return 0;
}