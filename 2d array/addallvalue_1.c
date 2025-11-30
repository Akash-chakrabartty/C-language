#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int arr[n][m];
    int add = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Value at arr[%d][%d] is %d\n", i, j, arr[i][j]);
            add += arr[i][j];
        }
    }

    printf("The total sum is: %d\n", add);

    return 0;
}
