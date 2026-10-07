#include <stdio.h>

void swap(int *first, int *second)
{
    int temporary = *first;
    *first = *second;
    *second = temporary;
}
int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    printf("Before: %d %d\n", a, b);
    swap(&a, &b);
    printf("After: %d %d\n", a, b);
    return 0;
}
