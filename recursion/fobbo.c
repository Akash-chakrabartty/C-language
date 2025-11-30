#include <stdio.h>
int fibonacci(int x)
{
    if (x == 1 || x == 2)
        return 1;
    int a = fibonacci(x - 1);
    int b = fibonacci(x - 2);
    int fibo = a + b;
    return fibo;
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