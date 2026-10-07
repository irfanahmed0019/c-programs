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
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}
