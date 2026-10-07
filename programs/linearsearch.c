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
    int key, position = -1;
    printf("Enter search value: ");
    if (scanf("%d", &key) != 1) return 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) { position = i; break; }
    }
    if (position < 0) printf("Not found\n");
    else printf("Found at position %d\n", position + 1);
    return 0;
}
