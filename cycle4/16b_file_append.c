#include <stdio.h>

int main()
{
    FILE *fp;
    char name[30];
    int reg, n, i;

    fp = fopen("students.txt", "a");   /* open in append mode */
    if (fp == NULL)
    {
        printf("Cannot open students.txt\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter reg.no and name: ");
        scanf("%d %s", &reg, name);
        fprintf(fp, "%d %s\n", reg, name);   /* write the record to the file */
    }
    fclose(fp);

    /* Read and display the file contents */
    fp = fopen("students.txt", "r");
    printf("\nContents of students.txt:\n");
    while (fscanf(fp, "%d %s", &reg, name) == 2)
        printf("%d %s\n", reg, name);
    fclose(fp);

    return 0;
}
