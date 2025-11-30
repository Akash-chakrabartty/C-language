#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter the value of n :");
    scanf("%d", &n);

    printf("Enter the value of r :");
    scanf("%d", &r);

    int n_factorial = 1;
    int r_factorial = 1;
    int nr_factorial = 1;

    for (int i = 2; i <= n; i++)
    {
        n_factorial = n_factorial * i;
    }
    for (int j = 2; j <= r; j++)
    {
        r_factorial = r_factorial * j;
    }
    for (int k = 2; k <= n - r; k++)
    {
        nr_factorial = nr_factorial * k;
    }

    int nCr = n_factorial / (r_factorial * nr_factorial);
    printf(" The nCr value is : %d", nCr);

    return 0;
}