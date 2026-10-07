#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;
    if (argc != 3) {
        printf("Enter two numbers as command line arguments\n");
        return 1;
    }
    if (sscanf(argv[1], "%d", &a) != 1 || sscanf(argv[2], "%d", &b) != 1) return 1;
    if (a > b) printf("Largest = %d\n", a);
    else printf("Largest = %d\n", b);
    return 0;
}
