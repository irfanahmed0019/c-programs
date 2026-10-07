#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("numbers.txt", "r");
    int number;
    long sum = 0;
    if (fp == NULL) {
        printf("Cannot open numbers.txt\n");
        return 1;
    }
    while (fscanf(fp, "%d", &number) == 1) sum += number;
    fclose(fp);
    printf("Sum = %ld\n", sum);
    return 0;
}
