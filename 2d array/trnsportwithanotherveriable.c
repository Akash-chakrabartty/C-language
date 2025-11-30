#include <stdio.h>
int main()
{
    int r;
    printf("enter the value of row:");
    scanf("%d", &r);

    int c;
    printf("enter the value of collum :");
    scanf("%d", &c);

    printf("put all the elements :");

    int arr[r][c];
    int brr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf(" %d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}