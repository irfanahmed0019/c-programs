#include <stdio.h>

int main()
{
    int a[50], even[50], odd[50], n, i, e = 0, o = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    /* Separate odd and even numbers into different arrays */
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even[e++] = a[i];
        else
            odd[o++] = a[i];
    }

    printf("Even numbers: ");
    for (i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nOdd numbers:  ");
    for (i = 0; i < o; i++)
        printf("%d ", odd[i]);
    printf("\n");

    return 0;
}
