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
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    // (*ptr).code = 111;
    ptr->code = 111;
    ptr->salary = 75.25;
    strcpy(ptr->name, "Yash");

    printf("%s\n", e1.name);
    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);

    return 0;
}