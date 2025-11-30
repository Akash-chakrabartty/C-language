#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    puts("enter a string:");
    gets(str);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("the count number is %d", count);
    return 0;
}