#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);

    if (age >= 18) // (age > 18), (age == 18)
    // '=' assignment & '==' equals
    {
        printf("You can Drive \n");
    }
    else
    {
        printf("You are below 18, you cannot Drive");
    }
    return 0;
}