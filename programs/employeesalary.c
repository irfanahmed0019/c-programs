#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    double basic, allowances, deductions, net;
};
int main(void)
{
    struct Employee employee;
    printf("Enter employee id: ");
    if (scanf("%d", &employee.id) != 1) return 1;
    printf("Enter employee name: ");
    if (scanf(" %99[^\n]", employee.name) != 1) return 1;
    printf("Enter basic salary, allowances and deductions: ");
    if (scanf("%lf %lf %lf", &employee.basic, &employee.allowances, &employee.deductions) != 3  ||
        employee.basic < 0 || employee.allowances < 0 || employee.deductions < 0) return 1;
    employee.net = employee.basic + employee.allowances - employee.deductions;
    printf("ID: %d\nName: %s\nBasic: %.2f\nAllowances: %.2f\nDeductions: %.2f\nNet salary: %.2f\n",
        employee.id, employee.name, employee.basic, employee.allowances, employee.deductions, employee.net);
    return 0;
        }
