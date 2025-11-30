#include <stdio.h>
int fibonacci(int x)
{
    if (x == 1 || x == 2)
        return 1;

    return fibonacci(x - 1) + fibonacci(x - 2);
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int fib = fibonacci(n);
    printf("the fibonaci number of %dth term is : %d", n, fib);
    return 0;
}