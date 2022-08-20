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
    struct employee insta[100];

    strcpy(insta[0].name, "Yash");
    insta[0].code = 100;
    insta[0].salary = 1000.25;

    return 0;
}