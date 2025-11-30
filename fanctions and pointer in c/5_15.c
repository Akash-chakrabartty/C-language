#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r)

{
    int fact = factorial(n) / (factorial(r) * factorial(n - r));

    return fact;
}

int main()
{
    int n, r;
    printf("Enter the value of n :");
    scanf("%d", &n);

    printf("Enter the value of r :");
    scanf("%d", &r);

    int ncr = combination(n, r);

    printf("the ncr vaue is : %d", ncr);

    return 0;
}