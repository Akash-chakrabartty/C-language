#include <stdio.h>
int maze(int n, int m)
{
    int rightways = 0;
    int downways = 0;

    if (n == 1 && m == 1)
        return 1;
    if (n == 1)
    {
        rightways += maze(n, m - 1);
    }
    if (m == 1)
    {
        downways += maze(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
        rightways += maze(n, m - 1);
        downways += maze(n - 1, m);
    }
    int totalways = downways + rightways;
    return totalways;
}
int main()
{
    int n;
    printf("Enter the number of rows of a meze :");
    scanf("%d", &n);

    int m;
    printf("Enter the number of collum of a meze :");
    scanf("%d", &m);

    int numOfWays = maze(n, m);
    printf("the number of ways are ::: %d", numOfWays);

    return 0;
}