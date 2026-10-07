#include <stdio.h>

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
    int odd[100], even[100], odd_count = 0, even_count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) even[even_count++] = a[i];
        else odd[odd_count++] = a[i];
    }
    printf("Odd: ");
    for (int i = 0; i < odd_count; i++) printf("%d ", odd[i]);
    printf("\nEven: ");
    for (int i = 0; i < even_count; i++) printf("%d ", even[i]);
    printf("\n");
    return 0;
}
