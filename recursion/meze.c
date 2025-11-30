#include <stdio.h>
int maze(int cr, int cc, int er, int ec)
{
    int rightways = 0;
    int downways = 0;

    if (cr == er && cc == ec)
        return 1;
    if (cr == er)
    {
        rightways += maze(cr, cc + 1, er, ec);
    }
    if (cc == ec)
    {
        downways += maze(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    {
        rightways += maze(cr, cc + 1, er, ec);
        downways += maze(cr + 1, cc, er, ec);
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

    int numOfWays = maze(1, 1, n, m);
    printf("the number of ways are ::: %d", numOfWays);

    return 0;
}