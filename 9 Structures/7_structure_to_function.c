#include <stdio.h>
#include <string.h>

struct employee
{
    char name[30];
    int code;
    float salary;
};

void show(struct employee emp)
{
    printf("Name of employee\n");
    scanf("%s", emp.name);
    printf("Code of employee\n");
    scanf("%d", &emp.code);
    printf("Salary of employee\n");
    scanf("%f", &emp.salary);

    printf("Name of employee is %s\n", emp.name);
    printf("Code of employee is %d\n", emp.code);
    printf("Salary of employee is %.2f\n", emp.salary);
    printf("\n");
}

int main()
{
    struct employee insta[100];

    show(insta[0]);
    printf("*---*---*---*---*---*---*---*---*\n");
    show(insta[1]);
    printf("*---*---*---*---*---*---*---*---*\n");

    return 0;
}