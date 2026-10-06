#include <stdio.h>

int main()
{
    int a[10][10], m, n, i, j, big, small;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    big = small = a[0][0];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > big)
                big = a[i][j];
            if (a[i][j] < small)
                small = a[i][j];
        }

    printf("Largest element  = %d\n", big);
    printf("Smallest element = %d\n", small);
    return 0;
}
