#include <stdio.h>
int main()
{
    // matrix a=m*n
    int m;
    printf("Enter the row of 1st matrix: ");
    scanf("%d", &m);

    int n;
    printf("Enter the collum of 1st matrix:");
    scanf("%d", &n);

    int a[m][n];

    printf("Enter all the elements of 1st matrix :\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // matrix b=p*q
    int p;
    printf("Enter the row of 2st matrix: ");
    scanf("%d", &p);

    int q;
    printf("Enter the collum of 2st matrix:");
    scanf("%d", &q);

    int b[p][q];
    int res[m][q];

    printf("Enter all the elements of 2st matrix :\n");

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (n != p)
    {
        printf("The matrix can not be multiplited.");
    }

    else
    {

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
    printf("the resultent matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
