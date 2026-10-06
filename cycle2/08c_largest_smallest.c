#include <stdio.h>

/* Function to find the largest element */
int findLargest(int a[], int n)
{
    int i, big = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > big)
            big = a[i];
    return big;
}

/* Function to find the smallest element */
int findSmallest(int a[], int n)
{
    int i, small = a[0];
    for (i = 1; i < n; i++)
        if (a[i] < small)
            small = a[i];
    return small;
}

int main()
{
    int a[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("The array elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nLargest element  = %d\n", findLargest(a, n));
    printf("Smallest element = %d\n", findSmallest(a, n));
    return 0;
}
