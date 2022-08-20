#include <stdio.h>
int main()
{
    int age;
    int vipPass = 0;
    vipPass = 16;

    printf("Enter your age \n");
    scanf("%d", &age);

    if ((age >= 18 && age <= 90))
    {
        printf("You are above 18 or below 70 so you can Drive\n");
    }
    else if (age == 16)
    {
        printf("You have vipPass so you can Drive");
    }
    else
    {
        printf("You cannot Drive");
    }
    return 0;
}