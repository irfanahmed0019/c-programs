#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0;

    fp = fopen("numbers.txt", "r");   /* open the file in read mode */
    if (fp == NULL)
    {
        printf("Cannot open numbers.txt\n");
        return 1;
    }

    printf("Numbers read from numbers.txt: ");
    while (fscanf(fp, "%d", &num) == 1)
    {
        printf("%d ", num);
        sum = sum + num;
    }
    fclose(fp);

    printf("\nSum = %d\n", sum);
    return 0;
}
