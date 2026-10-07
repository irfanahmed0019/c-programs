#include <stdio.h>

int main(void)
{
    int a[10][10], rows, columns;
    printf("Enter rows and columns (1-10 each): ");
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > 10 ||
        columns < 1 || columns > 10) return 1;
    printf("Enter matrix elements: ");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            if (scanf("%d", &a[i][j]) != 1) return 1;
    int transpose[10][10];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++) transpose[j][i] = a[i][j];
    printf("Transpose:\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) printf("%d\t", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
