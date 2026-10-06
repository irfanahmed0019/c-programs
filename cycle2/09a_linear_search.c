#include <stdio.h>

int main()
{
    int a[50], n, i, key, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    /* Check each element one by one */
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            pos = i + 1;   /* store the position */
            break;
        }
    }

    printf("The array elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    if (pos != -1)
        printf("\n%d found at position %d\n", key, pos);
    else
        printf("\n%d not found in the array\n", key);

    return 0;
}
