//matrix//
#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("\n");

    int a[m][n], b[m][n];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Result :\n");
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ",a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}