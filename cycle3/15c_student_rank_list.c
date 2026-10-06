#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float marks;
};

int main()
{
    struct Student s[50], temp;
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter name, roll no and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    /* Sort students by marks in descending order */
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (s[j].marks > s[i].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }

    printf("\nRank List\n");
    printf("Rank\tName\tRoll No\tMarks\n");
    for (i = 0; i < n; i++)
        printf("%d\t%s\t%d\t%.2f\n", i + 1, s[i].name, s[i].roll, s[i].marks);

    return 0;
}
