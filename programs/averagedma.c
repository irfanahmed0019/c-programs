#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double *numbers = malloc(2 * sizeof *numbers);
    if (numbers == NULL) { fprintf(stderr, "Allocation failed.\n"); return 1; }
    printf("Enter two floating-point numbers: ");
    if (scanf("%lf %lf", &numbers[0], &numbers[1]) != 2 ) { free(numbers); return 1; }
    printf("Average = %.2f\n", numbers[0] / 2 + numbers[1] / 2);
    free(numbers);
    return 0;
}
