#include <stdio.h>

int main()
{
    int a = 4;
    float b = 7.5;
    // 7.5 is not a integer
    char c = 'A';
    int d = 46;
    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);
    printf("Sum of a and d is %d \n", a + d);
    printf("The difference of a and d is %d \n", a - d);
    return 0;
}