#include <stdio.h>
#include <limits.h>

int main(void)
{
    int number;
    int bits[32], count = 0;
    long input;
    printf("Enter a non-negative decimal integer: ");
    if (scanf("%ld", &input) != 1 || input < 0 || input > INT_MAX) return 1;
    number = (int)input;
    do {
        bits[count++] = number % 2;
        number /= 2;
    } while (number != 0);
    printf("Binary = ");
    for (int i = count - 1; i >= 0; i--) printf("%d", bits[i]);
    printf("\n");
    return 0;
}
