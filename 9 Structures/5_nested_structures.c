#include <stdio.h>

int main()
{
    struct address
    {
        char city[30];
        int pin;
    };

    struct emp
    {
        char name[30];
        struct address a;
    };

    struct emp e = {"Yash", "Pune", 424305};

    printf("Name = %s\n", e.name);
    printf("City = %s *** Pin = %d", e.a.city, e.a.pin);
    // use {e.a.___} dot operator used twice

    return 0;
}