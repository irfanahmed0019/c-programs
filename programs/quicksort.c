#include <stdio.h>

void quicksort(int a[], int low, int high)
{
    if (low >= high) return;
    int pivot = a[high], split = low;
    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) {
            int temp = a[j]; a[j] = a[split]; a[split++] = temp;
        }
    }
    int temp = a[split]; a[split] = a[high]; a[high] = temp;
    quicksort(a, low, split - 1);
    quicksort(a, split + 1, high);
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
    quicksort(a, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
