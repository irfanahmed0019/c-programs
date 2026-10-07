#include <stdio.h>

int main(void)
{
    double a[10][10], b[10][10], product[10][10] = {{0}};
    int rows1, columns1, rows2, columns2;
    printf("Enter rows and columns of first matrix: ");
    if (scanf("%d %d", &rows1, &columns1) != 2) return 1;
    printf("Enter rows and columns of second matrix: ");
    if (scanf("%d %d", &rows2, &columns2) != 2) return 1;
    if (rows1 < 1 || rows1 > 10 || columns1 < 1 || columns1 > 10 ||
        rows2 < 1 || rows2 > 10 || columns2 < 1 || columns2 > 10) return 1;
    if (columns1 != rows2) { fprintf(stderr, "Incompatible dimensions.\n"); return 1; }
    printf("Enter first matrix: ");
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < columns1; j++)
            if (scanf("%lf", &a[i][j]) != 1) return 1;
    printf("Enter second matrix: ");
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < columns2; j++)
            if (scanf("%lf", &b[i][j]) != 1) return 1;
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < columns2; j++)
            for (int k = 0; k < columns1; k++) product[i][j] += a[i][k] * b[k][j];
    printf("Product matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) printf("%g\t", product[i][j]);
        printf("\n");
    }
    return 0;
        }
