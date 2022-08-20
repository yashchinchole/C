#include <stdio.h>

int main()
{
    float principal = 100, rate = 4.3, years = 1;
    float simpleinterest = (principal * rate * years) / 100;

    printf("The value of simpleinterest is %f \n", simpleinterest);
    return 0;
}