#include <stdio.h>

struct Complex { double real, imaginary; };
int main(void)
{
    struct Complex first, second, sum;
    printf("Enter real and imaginary parts of first number: ");
    if (scanf("%lf %lf", &first.real, &first.imaginary) != 2) return 1;
    printf("Enter real and imaginary parts of second number: ");
    if (scanf("%lf %lf", &second.real, &second.imaginary) != 2  ) return 1;
    sum.real = first.real + second.real;
    sum.imaginary = first.imaginary + second.imaginary;
    printf("Sum = %g %c %gi\n", sum.real, sum.imaginary < 0 ? '-' : '+', sum.imaginary < 0 ? -sum.imaginary : sum.imaginary);
    return 0;
}
