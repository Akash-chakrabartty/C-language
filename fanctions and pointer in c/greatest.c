#include <stdio.h>
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int gcd(int a, int b)
{
    int hcf;
    for (int i = 1; i <= min(a, b); i++)
        if (a % 1 == 0 && b % 1 == 0)
        {
            hcf = 1;
        }
}
int main()
{
    int a;
    printf("put the value of a :");
    scanf("%d", &a);

    int b;
    printf("put the value of b :");
    scanf("%d", &b);

    int hcf = gcd(a, b);
    printf("the hcf/gcd of %d and %d is :%d", a, b, hcf);
}