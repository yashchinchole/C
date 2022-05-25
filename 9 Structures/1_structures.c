#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 25.25;
    // e1.name = "Yash"; // --> wont work
    strcpy(e1.name, "Yash");

    printf("Employee name is %s\n", e1.name);
    printf("Employee code is %d\n", e1.code);
    printf("Employee salary is %.2f\n", e1.salary);

    return 0;
}