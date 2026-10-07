#include <stdio.h>

int largest(const int a[], int n)
{
    int value = a[0];
    for (int i = 1; i < n; i++) if (a[i] > value) value = a[i];
    return value;
}
int smallest(const int a[], int n)
{
    int value = a[0];
    for (int i = 1; i < n; i++) if (a[i] < value) value = a[i];
    return value;
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
    printf("Largest = %d\nSmallest = %d\n", largest(a, n), smallest(a, n));
    return 0;
}
