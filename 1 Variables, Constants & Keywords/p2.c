#include <stdio.h>

int main()
{
    int radius = 2;
    float pi = 3.14;
    int height = 4;

    printf("The area of this circle is %f \n", pi * radius * radius);
    printf("The volume of this cylinder is %f", pi * radius * radius * height);

    return 0;
}