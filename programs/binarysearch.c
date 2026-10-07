#include <stdio.h>

int main()
{
    int a[50], n, i, key;
    int low, high, mid = 0, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    /* Keep dividing the search range into two halves */
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            found = 1;
            break;
        }
        else if (key > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("The array elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    if (found == 1)
        printf("\n%d found at position %d\n", key, mid + 1);
    else
        printf("\n%d not found in the array\n", key);

    return 0;
}
