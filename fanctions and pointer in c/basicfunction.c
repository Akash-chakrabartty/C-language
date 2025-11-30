#include <stdio.h>
void greet()
{
    printf("Good morning \n");
    printf(" How are you ?\n");
    return;
}
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        greet();
    }

    return 0;
}