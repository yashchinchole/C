#include <stdio.h>
#include <math.h>

int main()
{
    int a = 8;
    int b = 2;

    printf("The value of a + b is : %d \n ", a + b);
    printf("The value of a - b is : %d \n ", a - b);
    printf("The value of a * b is : %d \n ", a * b);
    printf("The value of a / b is : %d \n ", a / b);

    int z;
    z = b * a; // Legal
    // b * a = Z; Illegal
    printf("The value of z is: %d \n ", z);

    printf("5 when divided by 2 leaves a remainder of %d \n", 5 % 2);

    // No operator is assumed to be present
    // printf("The value of 8*2 is %d \n ", (8)(2)); --> Wrong! Will not return 16
    printf("The value of 8*2 is  is %d \n ", (8) * (2));

    printf("The value of 8 to the power 2 is %f \n", pow(8, 2)); //Use #include <math.h> and pow(a,b) %f

    return 0;
}