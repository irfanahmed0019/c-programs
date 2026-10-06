#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("The matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    /* Diagonal elements have equal row and column index */
    printf("Diagonal elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i][i]);
        sum = sum + a[i][i];
    }

    printf("\nSum of diagonal elements = %d\n", sum);
    return 0;
}
