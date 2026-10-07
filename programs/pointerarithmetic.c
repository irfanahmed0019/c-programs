#include <stdio.h>

int main(void)
{
    double a, b, *p = &a, *q = &b;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", p, q) != 2) return 1;
    printf("Sum = %g\nDifference = %g\nProduct = %g\n", *p + *q, *p - *q, *p * *q);
    if (*q == 0) printf("Division by zero is not allowed\n");
    else printf("Quotient = %g\n", *p / *q);
    return 0;
}
