#include <stdio.h>
int main()
{
    int n;
    printf("the row is :");
    scanf("%d", &n);

    int m;
    printf("thr collum is :");
    scanf("%d", &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            add += arr[i][j];
        }
    }
    printf("the sum is :%d", add);
    return 0;
}