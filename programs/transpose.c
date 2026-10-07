#include <stdio.h>

int main()
{
    int a[10][10], t[10][10], m, n, i, j;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    /* Transpose: rows become columns */
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            t[j][i] = a[i][j];

    printf("The matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d\t", t[i][j]);
        printf("\n");
    }

    return 0;
}
