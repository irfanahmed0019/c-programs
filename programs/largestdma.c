#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter number of elements (1-10000): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10000) return 1;
    int *a = malloc((size_t)n * sizeof *a);
    if (a == NULL) { fprintf(stderr, "Allocation failed.\n"); return 1; }
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) { free(a); return 1; }
    }
    int largest = a[0];
    for (int i = 1; i < n; i++) if (a[i] > largest) largest = a[i];
    printf("Largest = %d\n", largest);
    free(a);
    return 0;
}
