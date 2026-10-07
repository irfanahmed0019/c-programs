#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float basic, hra, da, net;
};

int main()
{
    struct Employee e;

    printf("Enter employee id: ");
    scanf("%d", &e.id);
    printf("Enter employee name: ");
    scanf("%s", e.name);
    printf("Enter basic salary: ");
    scanf("%f", &e.basic);

    /* Net salary = basic + HRA (20% of basic) + DA (10% of basic) */
    e.hra = 0.20 * e.basic;
    e.da  = 0.10 * e.basic;
    e.net = e.basic + e.hra + e.da;

    printf("\nEmployee Details\n");
    printf("ID         : %d\n", e.id);
    printf("Name       : %s\n", e.name);
    printf("Basic      : %.2f\n", e.basic);
    printf("HRA        : %.2f\n", e.hra);
    printf("DA         : %.2f\n", e.da);
    printf("Net Salary : %.2f\n", e.net);

    return 0;
}
