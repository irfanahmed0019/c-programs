#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3) { fprintf(stderr, "Usage: %s first_name last_name\n", argv[0]); return 1; }
    printf("Full name: %s %s\n", argv[1], argv[2]);
    return 0;
}
