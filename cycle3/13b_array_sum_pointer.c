#include <stdio.h>

int main()
{
    int a[50], n, i, sum = 0;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;   /* pointer to the first element of the array */

    /* Add elements by moving the pointer */
    for (i = 0; i < n; i++)
    {
        sum = sum + *p;
        p++;
    }

    printf("The array elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nSum of elements = %d\n", sum);
    return 0;
}
