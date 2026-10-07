#include <stdio.h>

int main(void)
{
    int a[10][10], n;
    long sum = 0;
    printf("Enter square matrix size (1-10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) return 1;
    printf("Enter matrix elements: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (scanf("%d", &a[i][j]) != 1) return 1;
    printf("Main diagonal: ");
    for (int i = 0; i < n; i++) { printf("%d ", a[i][i]); sum += a[i][i]; }
    printf("\nSum = %ld\n", sum);
    return 0;
}
