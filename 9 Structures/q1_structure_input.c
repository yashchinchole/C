#include <stdio.h>
#include <string.h>

struct employee
{
    char name[30];
    int code;
    float salary;
};

int main()
{
    struct employee e1, e2, e3;

    printf("Enter the name of employees e1, e2, e3\n");
    scanf("%s %s %s", e1.name, e2.name, e3.name);
    printf("Enter the code of employees e1, e2, e3\n");
    scanf("%d %d %d", &e1.code, &e2.code, &e3.code);
    printf("Enter the salary of employees e1, e2, e3\n");
    scanf("%f %f %f", &e1.salary, &e2.salary, &e3.salary);

    printf("Employee e1 --> Name = %s *** Code = %d *** Salary = %.2f\n", e1.name, e1.code, e1.salary);
    printf("Employee e2 --> Name = %s *** Code = %d *** Salary = %.2f\n", e2.name, e2.code, e2.salary);
    printf("Employee e3 --> Name = %s *** Code = %d *** Salary = %.2f\n", e3.name, e3.code, e3.salary);

    return 0;
}