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
int main()
{
    int n, r;
    printf("Enter the value of n :");
    scanf("%d", &n);

    printf("Enter the value of r :");
    scanf("%d", &r);

    int n_factorial = factorial(n);
    int r_factorial = factorial(r);
    int nr_factorial = factorial(n - r);
    int nCr = n_factorial / (r_factorial * nr_factorial);
    printf(" The nCr value is : %d", nCr);

    return 0;
}