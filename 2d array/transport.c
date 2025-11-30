#include <stdio.h>
int main()
{
    int r;
    printf("the  value of row :");
    scanf("%d", &r);

    int c;
    printf("the value of collum :");
    scanf("%d", &c);

    int arr[r][c];
    printf("put the all elements :");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf(" %d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
