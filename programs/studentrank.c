#include <stdio.h>

struct Student { int roll; char name[100]; double marks; };
int main(void)
{
    struct Student students[100];
    int n;
    printf("Enter number of students (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) {
        printf("Enter roll number: ");
        if (scanf("%d", &students[i].roll) != 1) return 1;
        printf("Enter name: ");
        if (scanf(" %99[^\n]", students[i].name) != 1) return 1;
        printf("Enter total marks: ");
        if (scanf("%lf", &students[i].marks) != 1 ||
            students[i].marks < 0) return 1;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1]; students[j + 1] = temp;
            }
        }
    }
    printf("Rank\tRoll\tName\tMarks\n");
    int rank = 1;
    for (int i = 0; i < n; i++) {
        if (i > 0 && students[i].marks != students[i - 1].marks) rank = i + 1;
        printf("%d\t%d\t%s\t%.2f\n", rank, students[i].roll, students[i].name, students[i].marks);
    }
    return 0;
}
