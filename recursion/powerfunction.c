#include <stdio.h>
int powerlog(int a, int b)
{
    if (b == 1)
        return a;
    int ans = a * powerlog(a, b - 1);

    return ans;
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