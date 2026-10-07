#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p, *q;

    /* Allocate memory dynamically for two floats */
    p = (float *)malloc(sizeof(float));
    q = (float *)malloc(sizeof(float));

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", p, q);

    printf("Numbers are %.2f and %.2f\n", *p, *q);
    printf("Average = %.2f\n", (*p + *q) / 2);

    free(p);   /* release the allocated memory */
    free(q);

    return 0;
}
