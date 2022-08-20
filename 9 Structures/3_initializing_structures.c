#include <stdio.h>
#include <string.h>

struct employee
{
    char name[30]; // Order 
    int code;
    float salary;
};

int main()
{
    struct employee insta = {"Yash", 111, 75.25}; // Order

    printf("Name is %s\n", insta.name); // No Order Require
    printf("Code is %d\n", insta.code);
    printf("Salary is %.2f\n", insta.salary);

    return 0;
}