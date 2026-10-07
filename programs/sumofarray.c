#include <stdio.h>

long sum(const int a[], int n)
{
    long total = 0;
    for (int i = 0; i < n; i++) total += a[i];
    return total;
}
int main(void)
{
    int a[100], n;
    printf("Enter number of elements (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }
    printf("Sum = %ld\n", sum(a, n));
    return 0;
}
