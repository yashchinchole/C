#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[30];
    int code;
    float salary;
} emp;

void show(emp e)
{
    printf("Name of employee is %s\n", e.name);
    printf("Code of employee is %d\n", e.code);
    printf("Salary of employee is %.2f\n", e.salary);
    printf("*---*---*---*---*---*---*---*---*\n");
}

int main()
{
    emp e1 = {"Yash", 111, 75.25};
    emp e2 = {"Boom", 93, 11.15};

    show(e1);
    show(e2);

    return 0;
}