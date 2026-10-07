#include <stdio.h>

int main(void)
{
    int n, registration;
    char name[100];
    printf("Enter number of students (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;
    FILE *file = fopen("students.txt", "a");
    if (file == NULL) { perror("students.txt"); return 1; }
    for (int i = 0; i < n; i++) {
        printf("Enter registration number: ");
        if (scanf("%d", &registration) != 1) { fclose(file); return 1; }
        printf("Enter name: ");
        if (scanf(" %99[^\n]", name) != 1) { fclose(file); return 1; }
        if (fprintf(file, "%d %s\n", registration, name) < 0) { fclose(file); return 1; }
    }
    if (fclose(file) != 0) return 1;
    file = fopen("students.txt", "r");
    if (file == NULL) { perror("students.txt"); return 1; }
    printf("Student records:\n");
    int ch;
    while ((ch = fgetc(file)) != EOF) putchar(ch);
    int failed = ferror(file);
    if (fclose(file) != 0 || failed) return 1;
    return 0;
}
