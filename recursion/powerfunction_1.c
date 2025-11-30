#include <stdio.h>
int powerlog(int a, int b)
{
    if (b == 0)
        return 1; 
    if (b == 1)
        return a;
    if (b % 2 == 0)
        return powerlog(a, b / 2) * powerlog(a, b / 2);

    if (b % 2 != 0)
        return powerlog(a, b / 2) * powerlog(a, b / 2) * b;
}
int main()
{
    int a;
    printf("enter base :");
    scanf("%d", &a);

    int b;
    printf("enter power :");
    scanf("%d", &b);
    int p = powerlog(a, b);
    printf("%d", p);

    return 0;
}