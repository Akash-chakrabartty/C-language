#include <stdio.h>
int sum(int x, int y, int z)
{
    return x + y + z;
}
int main()
{
    int a, b, c;
    printf("enter 3 numbers :");
    scanf("%d %d %d", &a, &b, &c);
    int adding_value = sum(a, b, c);
    printf("The adding value is %d", adding_value);
}