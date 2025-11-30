#include <stdio.h>

int main()
{
    int a = 20, b = 30;
    int *p;
    int *q;
    p = &a;
    q = &b;
    printf("the value of a is :%d\n", a);
    printf("the value of a is :%d\n", *p);

    return 0;
}