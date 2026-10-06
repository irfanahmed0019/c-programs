#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, n, i, big;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    /* Allocate memory for n integers */
    a = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    big = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > big)
            big = a[i];

    printf("The array elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nLargest element = %d\n", big);

    free(a);   /* release the allocated memory */
    return 0;
}
