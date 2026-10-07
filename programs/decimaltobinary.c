#include <stdio.h>

int main()
{
    int num, n, bin[32], i = 0, j;

    printf("Enter a decimal number: ");
    scanf("%d", &num);
    n = num;

    /* Store the remainders in the array */
    while (num > 0)
    {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }

    /* Print the array in reverse order */
    printf("Decimal number = %d\n", n);
    printf("Binary equivalent = ");
    for (j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);
    printf("\n");

    return 0;
}
