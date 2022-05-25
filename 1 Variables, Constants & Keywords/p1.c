#include <stdio.h>

int main()
{
    float l, b;

    printf("The value of length \n");
    scanf("%f", &l);
    printf("The value of breadth \n");
    scanf("%f", &b);

    printf("The area of rectangle is %.2f", l * b);

    return 0;
}