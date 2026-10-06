#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Usage: %s firstname lastname\n", argv[0]);
        return 1;
    }

    /* argv[1] is the first name, argv[2] is the last name */
    printf("Full name: %s %s\n", argv[1], argv[2]);
    return 0;
}
