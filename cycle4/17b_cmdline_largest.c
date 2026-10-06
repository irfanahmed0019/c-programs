#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b;

    if (argc < 3)
    {
        printf("Usage: %s num1 num2\n", argv[0]);
        return 1;
    }

    /* Convert the command line arguments from string to integer */
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    if (a > b)
        printf("%d is the largest\n", a);
    else
        printf("%d is the largest\n", b);

    return 0;
}
