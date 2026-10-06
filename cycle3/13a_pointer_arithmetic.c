#include <stdio.h>

int main()
{
    int a, b;
    int *p, *q;   /* pointer variables */

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;   /* p points to a */
    q = &b;   /* q points to b */

    printf("Numbers are %d and %d\n", *p, *q);
    printf("Sum        = %d\n", *p + *q);
    printf("Difference = %d\n", *p - *q);
    printf("Product    = %d\n", (*p) * (*q));
    printf("Quotient   = %.2f\n", (float)*p / *q);

    return 0;
}
