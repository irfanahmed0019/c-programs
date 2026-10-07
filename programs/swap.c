#include <stdio.h>

/* Function receives addresses, so changes affect the original variables */
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);   /* pass the addresses (call by reference) */

    printf("After swapping:  a = %d, b = %d\n", a, b);
    return 0;
}
