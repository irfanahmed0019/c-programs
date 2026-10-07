#include <stdio.h>

/* Function to find the sum of array elements */
int findSum(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum = sum + a[i];
    return sum;
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

    printf("\nSum of elements = %d\n", findSum(a, n));
    return 0;
}
